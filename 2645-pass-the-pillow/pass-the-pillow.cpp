class Solution {
public:
    int passThePillow(int n, int time) {

        int mod = time % (2*n-2);
        
        if (mod < n){
            return 1+mod;
        }
        else{
            return 1+(2*n-2) - mod;
        }


        
    }
};