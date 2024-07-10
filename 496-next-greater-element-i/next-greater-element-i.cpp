class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        unordered_map<int,int> mp;
        stack<int> st;
       for(auto it: nums2){
        while(!st.empty() &&  st.top()<it){
            mp[st.top()] = it;
            st.pop();
        }

        st.push(it);

       }
       

        // for (auto it : mp){
        //     cout << it.first << " : " << it.second << endl;
        // }
        vector<int> res(n,-1);

        for(int i=0;i<n;i++){
            if (mp[nums1[i]]){
                res[i]= mp[nums1[i]];
                
            }
            
        }
        return res;
        
    }
};