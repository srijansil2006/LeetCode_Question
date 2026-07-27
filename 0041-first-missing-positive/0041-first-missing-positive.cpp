class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int mx = INT_MIN;
        for(int x : nums){
            mx = max(x, mx);
        }
        if(mx<0) return 1;
        unordered_map<int, int>mp;
        for(int x  : nums)mp[x]++;
        for(int i=1; i<=mx; i++){
            if(!mp.count(i)) return i;
        }
        return mx+1;
    }
};