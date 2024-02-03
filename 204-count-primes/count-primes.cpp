class Solution {
public:
    int countPrimes(int n) {
        if (n<=1){
            return 0;
        }
        vector<bool> primes(n,true);
        primes[0] = false;
        primes[1] = false;
        for (int i = 2;i<=sqrt(n);i++){
            if (primes[i]){
                for (int j = i*i;j<n;j+=i){
                    primes[j] = false;
                }
            }
        }

        int count = 0;
        for (int k = 0;k<n;k++){
            if (primes[k] == true){
                count++;
            }
        }
        return count;
        
    }
};