class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> left(n,1);
        // vector<int> right(n,1);
        for (int i = 1;i<n;i++){
            if (ratings[i] > ratings[i-1]){
                left[i] = left[i-1]+1;
            }

        }

        int right = 1;  // n-1 index
        int cur = 1;   // n-2 index 
        int sum = left[n-1];
        for (int i = n-2;i>=0;i--){
            if (ratings[i] > ratings[i+1]){
                cur++;
                
            }
            else{
                cur = 1;
            }
            sum += max(left[i], cur);

        }
        return sum;
   
        
    }
};