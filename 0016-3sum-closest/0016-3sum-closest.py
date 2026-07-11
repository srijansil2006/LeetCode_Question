class Solution:
    def threeSumClosest(self, nums: list[int], target: int) -> int:
        nums.sort()  # Sort the list first
        closest = float('inf')  # Best sum found so far
        n = len(nums)

        for i in range(n - 2):  # Loop through all triplets
            left = i + 1
            right = n - 1

            while left < right:
                total = nums[i] + nums[left] + nums[right]

                # Update closest if this sum is better
                if abs(target - total) < abs(target - closest):
                    closest = total

                # Move pointers
                if total < target:
                    left += 1
                elif total > target:
                    right -= 1
                else:
                    return total  # Exact match, best possible

        return closest
        