class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int t) {
        int n = nums.size();
        int tsm = 0;
        for(int i=0; i<n; i++) tsm += nums[i];
        if(abs(t)>tsm || (t+tsm)&1) return 0;
        int tar = (t+tsm)/2;
        vector<int>dp(tar+1, 0);
        dp[0] = 1;
        for(int i=0; i<n; i++){
            for(int s=tar; s>=nums[i]; s--){
                dp[s] += dp[s-nums[i]];
            }
        }
        return dp[tar];
    }
};