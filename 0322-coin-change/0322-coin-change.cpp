class Solution {
public:
    int coinChange(vector<int>& cn, int W) {
        int n = cn.size();
        vector<int>dp(W+1, INT_MAX);
        dp[0] = 0;
        for(int w=1; w<=W; w++){
            for(int i=0; i<n; i++){
                if(w>=cn[i] && dp[w - cn[i]] != INT_MAX)dp[w] = min(dp[w], dp[w-cn[i]]+1);
            }
        }
        return (dp[W]==INT_MAX ? -1 : dp[W]);
    }
};