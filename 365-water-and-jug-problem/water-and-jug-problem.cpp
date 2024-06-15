class Solution {
    private:
    bool helper(int x,int y,int cur, int total, int t,vector<int> &visited){
        
        if (cur < 0 or cur > total or visited[cur]== 1){
            return false;
        }
        visited[cur]=1;

        if (cur == t){
           return true;
        }

        bool one = helper(x,y,cur+x,total,t,visited);
        bool two = helper(x,y,cur-x,total,t,visited);
        bool three = helper(x,y,cur+y,total,t,visited);
        bool four = helper(x,y,cur-y,total,t,visited);

        return one||two||three||four;


    }
public:
    bool canMeasureWater(int x, int y, int target) {
        int total = x + y;
        vector<int> visited(x+y+1,-1);
        return helper(x,y,0,total,target,visited);
    }
};