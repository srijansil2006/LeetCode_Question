class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(int i=0; i<n; i++) s += nums[i];
        if(s&1) return 0;
        s = s/2;
        vector<int>dp(s+1, 0);
        for(int i=0; i<n; i++){
            for(int w = s; w>=nums[i]; w--){
                dp[w] = max(dp[w], dp[w-nums[i]]+nums[i]);
            }
        }
        return dp[s]==s;
    }
};