class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int count = 0;
        int lim = 0;
        for (auto it: arr){
            if (lim < it){
                lim = it;
            }
        }
        lim+=k;

        unordered_map<int,int> mp;
        for (auto it : arr){
            mp[it]++;
        }

        int ind;
        for (int i = 1;i<=lim;i++){
            if (mp[i]==0){
                count++;
                ind = i;

                if (count == k){
                    return ind;
                }
            }
        }
        return 0;
        
    }
};