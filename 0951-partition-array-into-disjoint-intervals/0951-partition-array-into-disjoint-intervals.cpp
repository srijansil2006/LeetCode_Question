class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int>lft(n, INT_MIN), rght(n, INT_MAX);
        lft[0] = nums[0];
        rght[n-1] = nums[n-1];
        for(int i=1; i<n; i++) lft[i] = max(lft[i-1], nums[i]);
        for(int i=n-2; i>=0; i--) rght[i] = min(rght[i+1], nums[i]);
        for(int i=1; i<n; i++)
            if(lft[i-1]<=rght[i]) return i;
        return 1;
    }
};