class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        // total sum = 18 
        // each team sum = total sum / (n/2)
        int total_sum = accumulate(skill.begin(), skill.end(), 0);

        int pair_sum = total_sum / (n/2);

        if (total_sum % (n/2) != 0){
            return -1;
        }

        unordered_map<int,int> mp;
        for (auto it : skill){
            mp[it]++;
        }

        long long ans = 0;
        for (int i = 0;i<n;i++){
            int rem_sum = pair_sum - skill[i];

            if (mp[rem_sum] > 0 and mp[skill[i]]>0){

                if (rem_sum == skill[i] and mp[rem_sum] < 2) return -1;
                ans += skill[i] * rem_sum;
                mp[rem_sum]-=1;
                mp[skill[i]]-=1;
                
                // cout << "ans : " << ans << endl;
            }
            else if (mp[skill[i]] > 0) return -1;
        }

        return ans;



        
    }
};