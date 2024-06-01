class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> seq;
        for (int i = 0;i<pow(2,n); i++){
            int code = i ^ (i>>1);
            seq.push_back(code);
        }
        return seq;
    }
};


