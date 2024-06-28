class Solution {
    private:
    bool canPlace(vector<int> &position, int dist,int balls){
        int count = 1;
        int temp = position[0];
        for (int i = 1;i<position.size();i++){
            if (position[i] - temp >= dist){
                count++;
                temp = position[i];
            }

            if (count >= balls){
                return true;
            }
        }
        return false;

    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int low = 1, high = position[n-1] - position[0];

        while (low <= high){
            int mid = low + (high - low)/2;

            if (canPlace(position, mid, m)){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return high;
        
    }
};