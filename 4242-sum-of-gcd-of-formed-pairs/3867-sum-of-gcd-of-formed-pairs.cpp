class Solution {
public:
    long long gcd(int a, int b){
        a = abs(a); b = abs(b);
        while(b!=0){
            int r = a%b;
            a = b;
            b = r;
        }
        return a;
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        vector<int>prefGcd;
        int mx = nums[0];
        for(int x : nums){
            if(x>=mx) mx = x;
            prefGcd.push_back(gcd(mx, x));
        }
        std::sort(prefGcd.begin(), prefGcd.end());
        long long sum = 0;
        int l = 0, r = n-1;
        while(l < r){
            sum += gcd(prefGcd[l], prefGcd[r]);
            l++; r--;
        }
        return sum;
    }
};
