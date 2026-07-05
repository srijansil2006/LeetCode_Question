class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        merged_num = nums1 + nums2
        merged_num.sort()
        if len(merged_num)%2 != 0:
            return  merged_num[len(merged_num)//2]
        else:
            return (merged_num[len(merged_num)//2]+merged_num[(len(merged_num)//2)-1])/2    