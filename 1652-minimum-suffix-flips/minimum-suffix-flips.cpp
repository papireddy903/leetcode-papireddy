class Solution {
public:
    int minFlips(string t) {
        int ind;
        for(int i=0;i<t.size();i++){
            if(t[i]=='1'){
                ind=i;
                break;
            }
        }
        int cnt=0;
        while(ind<t.size()){
            if(t[ind]=='1'){
                while(t[ind]=='1'){
                    ind++;
                }
                cnt++;
            }
            else if(t[ind]=='0'){
                while(t[ind]=='0') ind++;
                cnt++;
            }
        }
        return cnt;
    }
};