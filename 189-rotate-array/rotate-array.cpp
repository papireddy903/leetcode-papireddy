class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums.begin(), nums.end());
        // 7 6 5 4 3 2 1 
        reverse(nums.begin(), nums.begin()+(k%n));
        reverse(nums.begin()+(k%n), nums.end());
        
    }
};