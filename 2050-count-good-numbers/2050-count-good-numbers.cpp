class Solution {
public:
    long long md = 1e9+7;
    long long power(long long a, long long n){
        a %= md;
        long long res = 1;
        while(n>0){
            if(n&1) res = (res*a)%md;
            a = (a*a)%md;
            n>>=1;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long e = (n+1)/2;
        long long o = n-e;
        long long n1 = 1, n2 = 1;
        n1 = power(5, e);
        n2 = power(4, o);
        return (int)((1LL*n1*n2)%md);
    }
};