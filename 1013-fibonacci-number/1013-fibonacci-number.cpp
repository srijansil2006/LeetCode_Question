class Solution {
public:
    int fib(int n) {
        if(n<2) return n;
        int cur = 1, prv = 0;
        for(int i=2; i<=n; i++){
            int tmp = cur;
            cur += prv;
            prv = tmp;
        }
        return cur;
    }
};