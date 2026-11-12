class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        int m = wordDict.size();
        vector<bool>dp(n+1, 0);
        dp[0] = 1;
        for(int i=1; i<=n; i++){
            for(int j=0; j<i; j++){
                if(dp[j]){
                    string str = s.substr(j, i-j);
                    for(string w : wordDict){
                        if(w==str){
                            dp[i] = 1;
                            break;
                        }
                    }
                }
            }
        }
        return dp[n];
    }
};