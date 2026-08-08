import java.util.Arrays;

class Solution {
    public int largestPerimeter(int[] nums) {
        int n = nums.length;
        int ans = 0;
        Arrays.sort(nums);
        for (int i = n - 1; i >= 2; i--) {
            int hi = nums[i];
            int mid = nums[i - 1];
            int lo = nums[i - 2];
            if (lo + mid > hi) {
                ans = hi + mid + lo;
                break;
            }
        }
        return ans;
    }
}