class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int t) {
        int n = nums.size();
        int tsm = 0;
        for(int i=0; i<n; i++) tsm += nums[i];
        if(abs(t)>tsm || (t+tsm)&1) return 0;
        int tar = (t+tsm)/2;
        vector<vector<int>>dp(n+1, vector<int>(tar+1, 0));
        dp[0][0] = 1;
        for(int i=1; i<=n; i++){
            for(int s=0; s<=tar; s++){
                dp[i][s] += dp[i-1][s];
                if(nums[i-1]<=s) dp[i][s] += dp[i-1][s-nums[i-1]];
            }
        }
        return dp[n][tar];
    }
};