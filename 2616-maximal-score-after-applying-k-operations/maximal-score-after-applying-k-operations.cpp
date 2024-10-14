class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {

        priority_queue<int> heap;

        for (auto it : nums){
            heap.push(it);
        }

        long long score = 0;

        while (k--){
            int maxi = heap.top();
            heap.pop();
            score += maxi;
            heap.push(ceil((double)maxi/3));
        }

        return score;
        



    }
};