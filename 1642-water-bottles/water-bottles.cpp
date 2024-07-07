class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int rem = numBottles;

        // ans = 15, rem = 15;

        while (rem >= numExchange){
            ans += rem / numExchange; // 15 + 15 / 
            rem = rem / numExchange + rem % numExchange;
        }
        return ans;



        
    }
};