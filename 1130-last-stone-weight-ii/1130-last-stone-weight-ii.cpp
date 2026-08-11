class Solution {
public:
    int lastStoneWeightII(vector<int>& stn) {
        int n = stn.size();
        int s = 0;
        for(int i=0; i<n; i++) s+= stn[i];
        int t = (s+1)/2;
        vector<int>dp(t+1, 0);
        for(int i=0; i<n; i++){
            for(int w=t; w>=stn[i]; w--){
                dp[w] = max(dp[w], dp[w-stn[i]]+stn[i]);
            }
        }
        return abs(s-2*dp[t]);
    }
};