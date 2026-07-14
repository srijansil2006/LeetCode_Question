class Solution {
public:
    string transform(const string &s){
        if(s.size()==0) return "^$";
        string str = "^";
        for(char ch : s){
            str += '#'; str += ch;
        }
        str += "#$";
        return str;
    }
    string longestPalindrome(string s) {
        string str = transform(s);
        int n = str.size();
        vector<int>palinRadii(n, 0);
        int cntr = 0, rght = 0;
        for(int  i=1; i<n-1; i++){
            int  mrr = 2*cntr - i;
            if(rght>i){
                palinRadii[i] = min(rght-i, palinRadii[mrr]);
            }
            while(str[i+1+palinRadii[i]]==str[i-1-palinRadii[i]]) palinRadii[i]++;
            if(i+palinRadii[i]>rght){
                cntr = i;
                rght = i+palinRadii[i];
            }
        }
        int mxRadii = 0;
        int cntrIdx = 0;
        for(int i=1; i<n-1; i++){
            if(palinRadii[i]>mxRadii){
                cntrIdx = i;
                mxRadii = palinRadii[i];
            }
        }
        int start = (cntrIdx-mxRadii)/2;
        return s.substr(start, mxRadii);
    }
};