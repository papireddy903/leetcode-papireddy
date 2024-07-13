class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n  = arr.size();
        int zeroes = 0;
        vector<int> new_arr(n,0);
        for (int i = 0;i<n;i++){
            if (arr[i] == 0){
                zeroes++;
            }
            else{
                if (i+zeroes < n)
                new_arr[i+zeroes] = arr[i];
            }
        }
        for (int i = 0;i<n;i++){
            arr[i] = new_arr[i];
        }
        // return new_arr;
        
    }
};