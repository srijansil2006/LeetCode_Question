class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)+2
        dp = [1]*n
        dp[0] = 0
        for num in nums:
            if n > num >= 1:
                dp[num] = 0

        return dp.index(1)