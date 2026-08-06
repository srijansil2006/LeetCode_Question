class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int b1=0, b2=0;
        int count = 0;
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        while(b2<s.size() && b1<g.size()){
            if(g[b1]<=s[b2]){
                b1++;
                b2++;
                count++;
            }
            else b2++;
        }
        return count;
    }
};