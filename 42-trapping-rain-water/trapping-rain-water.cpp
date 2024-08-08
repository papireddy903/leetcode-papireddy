class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pref(n);
        pref[0] = height[0];
        for (int i =1;i<height.size();i++){
            pref[i] = max(pref[i-1], height[i]);
        }

        vector<int> suff(n);
        suff[n-1] = height[n-1];
        for (int i = n-2;i>=0;i--){
            suff[i] = max(suff[i+1], height[i]);
        }

        int total = 0;
        for (int i = 1;i<n;i++){
            int leftMax = pref[i];
            int rightMax = suff[i];

            if (leftMax > height[i] and rightMax > height[i]){
                total += min(leftMax, rightMax) - height[i];
            }
        }
        return total;
        
    }
};