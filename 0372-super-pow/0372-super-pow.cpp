class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int md = 1337;
        if(a==1) return 1;
        int ph = 1140;
        int exp = 0;
        for(int i : b) exp = (exp*10+i)%ph;
        if(exp==0) exp = ph;
        a = a%md;
        int res = 1;
        while(exp>0){
            if(exp%2==1)
                res = (res*a)%md;
            a = (a*a)%md;
            exp /= 2;
        }
        return res;
    }
};