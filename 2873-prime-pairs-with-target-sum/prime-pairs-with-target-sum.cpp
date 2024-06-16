class Solution {
    private:
    void sieve(int n, unordered_map<int,int> &mp){
        vector<bool> isPrime(n+1,true);
        for (long long i = 2;i*i<=n;i++){
            if (isPrime[i]){
                for (long long k = i*i;k<=n;k+=i){
                    isPrime[k] = false;
                }
            }
        }

        for (int i = 2;i<=n;i++){
            if (isPrime[i] == true){
                mp[i]++;
            }
        }
    }
public:
    vector<vector<int>> findPrimePairs(int n) {

        unordered_map<int,int> mp;
        vector<vector<int>> ans;

        sieve(n,mp);

        vector<int> prime;

        for (auto it: mp){
            prime.push_back(it.first);
        }

        sort(prime.begin(),prime.end());
        // cout << "Prime Numbers" << endl;
        // for (auto it: prime){
        //     cout << it << " ";
        // }
        // cout  << endl;

        for (int i = 0;i<prime.size();i++){
            int rem = n - prime[i];
            if (mp.find(rem)!= mp.end() and prime[i] <= rem){
                ans.push_back({{prime[i], rem}});
                mp[prime[i]]--;
            }
        }

        return ans;

        
    }
};