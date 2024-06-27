class Solution {
    private:
    void merge(int low, int mid, int high, vector<int> &nums){
        int left = low;
        int right = mid+1;
        vector<int> temp;

        while (left <= mid and right <= high){
            if (nums[left] <= nums[right]){
                temp.push_back(nums[left++]);
            }
            else{
                temp.push_back(nums[right++]);
            }
        }

        while (left<=mid){
            temp.push_back(nums[left++]);
        }

        while (right<=high){
            temp.push_back(nums[right++]);
        }

        for (int i = low;i<=high;i++){
            nums[i] = temp[i-low];
        }
    }

    int countPairs(int start, int mid, int end, vector<int> &nums){

        int count = 0;
        int right = mid+1;
        for (int i = start;i<=mid;i++){
            while (right<=end and (double)nums[i]/2 > nums[right]){
                right++;
            }
            count+=(right-(mid+1));



        }
        return count;

    }
    int mergeSort(int start, int end, vector<int> &nums){
        int count = 0;
        if (start < end){
            int mid = start + (end-start)/2;
            count += mergeSort(start, mid, nums);
            count += mergeSort(mid+1,end, nums);

            count += countPairs(start,mid,end,nums);
            merge(start, mid, end, nums);

        }
        return count;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(0,nums.size()-1,nums);
        
    }
};