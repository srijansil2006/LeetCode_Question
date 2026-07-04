class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=1; j<m; j++) matrix[i][j] += matrix[i][j-1];
        }
        int cnt = 0;
        for(int c1 = 0; c1 < m; c1++){
            for(int c2 = c1; c2 < m; c2++){
                unordered_map<int,int> mp;
                mp[0] = 1;
                int prefSum = 0;
                for(int i = 0; i < n; i++){
                    int colSum = matrix[i][c2] - (c1 > 0 ? matrix[i][c1-1] : 0);
                    prefSum += colSum;
                    if(mp.count(prefSum - target))
                        cnt += mp[prefSum - target];
                    mp[prefSum]++;
                }
            }
        }
        return cnt;
    }
};