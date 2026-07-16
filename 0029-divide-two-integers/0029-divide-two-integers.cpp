class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ld_dividend = dividend;
        long long ld_divisor = divisor;
        long long result = ld_dividend / ld_divisor;
        
        if (result > (1LL<<31)-1) {
            return 2147483647;
        }
        if (result < -(1LL<<31)) {
            return -2147483648;
        }
        return (int)result;
    }
};