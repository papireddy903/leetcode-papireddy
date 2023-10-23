class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0, k});
        vector<vector<pair<int, int>>> adj(n + 1);
        for (auto it : times) {
            adj[it[0]].push_back({it[1], it[2]});
        }
        vector<int> wt(n + 1, INT_MAX);
        wt[k] = 0;
        while (!pq.empty()) {
            int prevDis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for (auto it : adj[node]) {
                int adjNode = it.first;
                int adjDis = it.second;
                if (wt[adjNode] > prevDis + adjDis) {
                    wt[adjNode] = prevDis + adjDis;
                    pq.push({prevDis + adjDis, adjNode});
                }
            }
        }
        int maxi = -1;
        for (int i = 1; i <= n; i++) {
            if (wt[i] == INT_MAX) return -1;
            maxi = max(wt[i], maxi);
        }
        return maxi;
    }
};
