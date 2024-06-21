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
        int j = minutes-1;
        int n = customers.size();
        // int no_sum = 0;
        while (i<n and j<n){
            int no_sum = 0;
            for (int k = i;k<=j;k++){
                 if (grumpy[k] == 1){
                    no_sum += customers[k];
                 }
            }
            if (j-i+1 == minutes){
                
                maxi = max(no_sum, maxi);
                // cout << "MAXI: " << maxi << endl;
                j++;
                i++;
            }
            else{
                j++;
            }
            
        }
        return maxi+initial_score;
    }
};