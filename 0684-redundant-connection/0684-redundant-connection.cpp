class DSU{
private:
    vector<int>par;
    vector<int>rank;
public:
    DSU(int n){
        par.resize(n);
        rank.resize(n, 0);
        for(int i=0; i<n; i++) par[i] = i;
    }
    int find(int x){
        if(par[x]==x) return x;
        return par[x] = find(par[x]);
    }
    bool unite(int x, int y){
        int rx = find(x);
        int ry = find(y);
        if(rx==ry) return 0;
        if(rank[rx]<rank[ry]) par[rx] = ry;
        else if(rank[rx]>rank[ry]) par[ry] = rx;
        else{
            par[ry] = rx;
            rank[rx]++;
        }
        return 1;
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DSU dsu(n+1);
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            if(!dsu.unite(u, v)) return edge;
        }
        return {};
    }
};