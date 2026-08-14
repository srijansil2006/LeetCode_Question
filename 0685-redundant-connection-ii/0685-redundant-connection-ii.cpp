class DSU{
private:
    vector<int> par, rnk;
public:
    DSU(int n){
        par.resize(n);
        rnk.resize(n, 0);
        for(int i = 0; i < n; i++) par[i] = i;
    }
    int find(int x){
        if(par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    bool unite(int x, int y){
        int rx = find(x), ry = find(y);
        if(rx == ry) return false;
        if(rnk[rx] == rnk[ry]){ par[ry] = rx; rnk[rx]++; }
        else if(rnk[rx] > rnk[ry]) par[ry] = rx;
        else par[rx] = ry;
        return true;
    }
};

class Solution {
public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n+1, 0);
        vector<int> cand1, cand2;
        for(auto& e : edges){
            if(parent[e[1]] == 0){
                parent[e[1]] = e[0];
            } else {
                cand1 = {parent[e[1]], e[1]}; 
                cand2 = {e[0], e[1]};       
            }
        }
        DSU dsu(n+1);
        for(auto& e : edges){
            if(e == cand2) continue;  
            if(!dsu.unite(e[0], e[1])){
                if(cand1.empty()) return e;
                return cand1;
            }
        }
        return cand2;
    }
};