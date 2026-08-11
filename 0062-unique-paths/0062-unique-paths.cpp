class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>dp(n+1, 1);
        for(int i=2; i<=m; i++){
            for(int j=2; j<=n; j++){
                dp[j] = dp[j]+dp[j-1];
            }
        }
        return dp[n];
    }
};