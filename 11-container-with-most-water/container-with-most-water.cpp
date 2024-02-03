#include<algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int maxArea = INT_MIN;
        while(i<j){
            int area  = min(height[i],height[j]) * (j-i);
            if (area > maxArea){
                maxArea = area;
            }
            if (height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }

        }
        return maxArea;
        
    }
};