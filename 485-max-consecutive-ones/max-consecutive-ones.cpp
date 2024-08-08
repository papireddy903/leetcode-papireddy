class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        for (int i = 0;i<nums.size();i++){
            if (i == nums.size()-1 or nums[i]==0){
                if (nums[i] == 1) count++;
                maxi = max(count, maxi);
                cout << "maxi: " << maxi << endl;
                count = 0;
            }
            else{
                count++;
            }
            // cout << "count : " << count << endl;
        }
        return maxi;
        
    }
};