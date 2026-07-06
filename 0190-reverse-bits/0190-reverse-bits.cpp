class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;
        for(int i=31; i>=0; i--){
            if(n&(1LL<<i)){
                ans += (1LL<<(31-i));
            }
        }
        return ans;
    }
};