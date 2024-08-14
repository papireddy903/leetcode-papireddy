class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        int p1 = 0, p2 = 0, p3 = 0;

        for (int i = 1;i<n;i++){
            int two = 2 * dp[p1];
            int three = 3 * dp[p2];
            int five = 5 * dp[p3];

            int mini = min(two, min(three, five));

            if (mini == two) p1++;
            if (mini == three) p2++;
            if (mini == five) p3++;

            dp[i] = mini;
        }

        return dp[n-1];


        
    }
};