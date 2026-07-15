class Solution {
public:
    int strStr(string haystack, string needle) {
        char c = needle[0];
        int n = haystack.size(), m = needle.size();
        int pos = -1;
        for(int i=0; i<=n-m+1; i++){
            string str = haystack.substr(i, m);
            if(str==needle){
                pos = i;
                break;
            }
        }
        return pos;
    }
};