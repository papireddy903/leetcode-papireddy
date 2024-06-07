class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        if (bills[0] > 5){
            return false;
        }
        for (int i = 0;i<bills.size();i++){
            if (bills[i] == 5){
                fives++;
            }

            else if (bills[i] == 10){
                if (fives < 1){
                    return false;
                }
                fives-=1;
                tens++;

            }
            else if (bills[i] == 20){
               if (tens >= 1 and fives >= 1){
                tens--;
                fives--;
               }
               else if (fives>=3){
                fives-=3;
               }
               else{
                return false;
               }
            }
        }
        return true;
        
    }
};