class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n==0 || s[0]=='0') return 0;
        int prev2 = 1;
        int prev1 = 1;
        for(int i=1; i<n; i++){
            int curr = 0;
            if(s[i]!='0') curr += prev1;
            string str = s.substr(i-1, 2);
            if(str[0] != '0' && stoi(str)<=26) curr+=prev2;
            prev2 =prev1;
            prev1 = curr;
        }
        return prev1;
    }
};