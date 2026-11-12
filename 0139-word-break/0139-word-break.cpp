class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        map<string, bool>mp;
        for(string w : wordDict) mp[w]=1;
        vector<bool>dp(n+1, 0);
        dp[0] = 1;
        for(int i=1; i<=n; i++){
            for(int j=0; j<i; j++){
                if(dp[j] && mp.count(s.substr(j, i-j))) dp[i] = 1;
            }
        }
        return dp[n];
    }
};