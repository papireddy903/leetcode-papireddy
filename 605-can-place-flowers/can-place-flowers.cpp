class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        int canPlant = 0;
        if (n==0) return true;
        if (len==1){
            return flowerbed[0] == 0;
        }


        for (int i = 0;i<len;i++){
            if (i==0){
                if (flowerbed[i]==0 and flowerbed[i+1]==0){
                    canPlant++;
                    flowerbed[i] = 1;
                }
            }
            else if (i==len-1){
                if (flowerbed[i]==0 and flowerbed[i-1]==0){
                    canPlant++;
                    flowerbed[i] = 1;
                }
            }
            else{
                if (flowerbed[i]==0 and flowerbed[i-1]==0 and flowerbed[i+1]==0){
                    canPlant++;
                    flowerbed[i] = 1;
                }
            }
        }

        cout << canPlant << endl;

        return canPlant>=n;


        
    }
};