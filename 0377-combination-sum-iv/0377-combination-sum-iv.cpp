class Solution {
public:
    int combinationSum4(vector<int>& nums, int t) {
        int n = nums.size();
        vector<long long>dp(t+1, 0);
        dp[0] = 1;
        for(int j=1; j<=t; j++){
            for(int i=0; i<n; i++){
                if(dp[j]>INT_MAX) dp[j] = INT_MAX;
                if(j>=nums[i]) dp[j] += dp[j-nums[i]];
            }
        }
        return dp[t];
    }
};