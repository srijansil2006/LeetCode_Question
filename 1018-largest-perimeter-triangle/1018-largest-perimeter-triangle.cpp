class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        std::sort(nums.begin(), nums.end());
        for(int i=n-1; i>=2; i--){
            int hi = nums[i];
            int mid = nums[i-1];
            int lo = nums[i-2];
            if(hi<(mid+lo)){
                ans = hi+mid+lo;
                break;
            }
        }
        return ans;
    }
};