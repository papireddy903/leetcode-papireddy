class Solution {
public:
    int binaryGap(int n) {
        int maxi = 0;
        int dist = 0;
        string dig = "";
        while (n){
            dig += to_string(n%2);
            n = n/2;
        }

        reverse(dig.begin(),dig.end());
        int ind;
        for (int i = 0;i<dig.size();i++){
            if (dig[i] == '1'){
                ind = i;
                break;
            }
        }
        cout << "first one : " << ind << endl;
        int count = 1;

        for (int i = ind+1;i<dig.size();i++){
            
            if (dig[i]=='1'){
                dist = i - ind;
                cout << "dist: " << dist << endl;
                // maxi = max(dist,maxi);
                if (dist > maxi){
                    maxi = dist;
                }
                ind = i;
            }
        }

        return maxi;



        
    }
};