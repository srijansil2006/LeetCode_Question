class Solution {
public:
    int tribonacci(int n) {
        int prev1 = 0;
        int prev2 = 1;
        int prev3 = 1;
        if(n==0) return prev1;
        if(n==1) return prev2;
        if(n==2) return prev3;
        for(int i=3; i<=n; i++){
            int curr = prev1+prev2+prev3;
            prev1 = prev2;
            prev2 = prev3;
            prev3 = curr;
        }
        return prev3;
    }
};