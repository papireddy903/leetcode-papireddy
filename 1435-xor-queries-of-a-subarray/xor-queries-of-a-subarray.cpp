class Solution {
public:
    vector<int> xorQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> arr;
        arr.push_back(nums[0]);
        for (int i = 1;i<nums.size();i++){
            arr.push_back(nums[i] ^ arr[i-1]);
        }

        vector<int> ans;
        for (int i = 0;i<queries.size();i++){
            int first = queries[i][0];
            int second = queries[i][1];

            if (first==0){
                ans.push_back(arr[second]);
            }
            else{
                ans.push_back(arr[first-1]^arr[second]);
            }
        }

        return ans;
        
    }
};

// 2 6 8 14