class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();

        vector<pair<int, pair<int,char>>> posHealth;
        unordered_map<int, int> mp;
        for (int i = 0;i<n;i++){
            posHealth.push_back({positions[i], {healths[i], directions[i]}});
        }

        sort(posHealth.begin(), posHealth.end());

        // stack<pair<int,pair<int,int>>> st;
        stack<int> st;
     

        for (int i = 0;i<n;i++){
            
            while (!st.empty() && posHealth[i].second.second == 'L' && posHealth[st.top()].second.second == 'R'){

                if (posHealth[i].second.first == posHealth[st.top()].second.first){
                    posHealth[i].second.first = 0;
                    posHealth[st.top()].second.first = 0;
                    st.pop();
                    break;
                    
                    
                }
                else if (posHealth[i].second.first > posHealth[st.top()].second.first){
                    posHealth[i].second.first-=1;
                    // posHealth[i][st.top().second.first] = 0;
                    posHealth[st.top()].second.first = 0;
                    st.pop();
                }
                else{
                    posHealth[i].second.first = 0;
                    // posHealth[i][st.top().second.first]-=1;
                    posHealth[st.top()].second.first-=1;
                    break;
                }


            }
            
            if (posHealth[i].second.first > 0){
                st.push(i);
            }


        }

        while (!st.empty()){
            mp[posHealth[st.top()].first] = posHealth[st.top()].second.first;
            st.pop();
        }

        vector<int> rem;

        for (int i = 0;i<n;i++){
            if (mp.find(positions[i])!=mp.end())
                rem.push_back(mp[positions[i]]);
 
        }

        return rem;

        
        
    }
};