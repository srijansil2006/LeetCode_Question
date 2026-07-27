class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int mx = INT_MIN;
        unordered_map<int, int>mp;
        for(int x  : nums){
            mx = max(mx, x);
            mp[x]++;
        }
        if(mx<1) return 1; 
        for(int i=1; i<=mx; i++){
            if(!mp.count(i)) return i;
        }
        return mx+1;
    }
};