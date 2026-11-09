class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n =  nums.size();
        int leftMax = nums[0], curMax = nums[0], pos = 0;
        for (int i = 1; i < n; i++) {
            curMax = max(curMax, nums[i]);
            if (nums[i] < leftMax) {
                leftMax = curMax;
                pos = i;
            }
        }
        return pos + 1;
    }
};