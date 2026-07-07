class Solution {
public:
    int myAtoi(string s) {
        int i=0, sgn = 1;
        long long res = 0;
        while(i<s.size() && s[i]==' ') i++;
        if(i==s.size()) return 0;
        if(s[i]=='-'){
            sgn = -1; i++;
        }else if(s[i]=='+')i++;
        while(i<s.size() && isdigit(s[i])){
            res = res*10 + (s[i]-'0');
            if(sgn*res > INT_MAX) return INT_MAX;
            if(sgn*res < INT_MIN) return INT_MIN;
            i++;
        }
        return (int)(sgn*res);
    }
};