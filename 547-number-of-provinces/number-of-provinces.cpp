class Solution {
    private:
    void dfs(int ind,unordered_map<int,bool> &visited, vector<vector<int>> &m){
        visited[ind] = true;
        int c=m[0].size();

        for (int col=0;col<c;col++){
            if (col != ind && m[ind][col]==1 and !visited[col]){
                dfs(col, visited, m);
            }
        }
        

        



    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        unordered_map<int,bool> visited;
        int count = 0;
        for (int i = 0;i<n;i++){
            if (!visited[i]){
                dfs(i,visited,isConnected);
                count++;
            }
        }
        return count;

    }
};