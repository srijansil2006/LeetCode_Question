class Solution {
public:
    int change(int W, vector<int>& coins) {
        int n = coins.size();
        vector<long long> dp(W + 1, 0);
        dp[0] = 1;
        for(int i = 0; i < n; i++) {
            for(int w = coins[i]; w <= W; w++) {
                dp[w] += dp[w - coins[i]];
                if(dp[w] > INT_MAX) dp[w] = INT_MAX;
            }
        }
        return dp[W];
    }
};