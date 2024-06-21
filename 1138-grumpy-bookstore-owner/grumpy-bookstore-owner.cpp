class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int initial_score = 0;
        for (int i = 0;i<customers.size();i++){
            if (grumpy[i] == 0){
                initial_score += customers[i];
            }
        }
        int maxi = INT_MIN;
        int i = 0;
        int j = 0;
        int n = customers.size();
        // int no_sum = 0;
        int no_sum = 0;
        while (i<n and j<n){
            if (grumpy[j] == 1){
                no_sum += customers[j];
            }


            // for (int k = i;k<=j;k++){
            //      if (grumpy[k] == 1){
            //         no_sum += customers[k];
            //      }
            // }
            if (j-i+1 == minutes){
                
                maxi = max(no_sum, maxi);
                // cout << "MAXI: " << maxi << endl;
                if (grumpy[i] == 1){
                    no_sum-=customers[i];
                }
                i++;
            }
            j++;
            
            
        }
        return maxi+initial_score;
    }
};