class Solution {
public:
    void dfs(int nd,vector<bool>&vis, vector<vector<int>>&adj, int &edg, int &ndCnt){
        vis[nd] =true;
        ndCnt++;
        edg += adj[nd].size();
        for(int v : adj[nd]){
            if(!vis[v]) dfs(v, vis, adj, edg, ndCnt);
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int cnt = 0;
        vector<vector<int>>adj(n);
        vector<bool>vis(n ,0);
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        for(int i=0; i<n; i++){
            if(!vis[i]){
                int edg = 0, ndCnt = 0;
                dfs(i, vis, adj, edg, ndCnt);
                if(edg >= ndCnt*(ndCnt-1)) cnt++;
            }
        }
        return cnt;
    }
};