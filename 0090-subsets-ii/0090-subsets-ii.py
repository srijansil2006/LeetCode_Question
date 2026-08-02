class Solution:
    def get_subset(self,nums:list,ans:list,idx:int,all_subset:list)->None:
        nums.sort()
        if(idx==len(nums)):
            all_subset.append(ans[:])
            return 
        ans.append(nums[idx])
        self.get_subset(nums,ans,idx+1,all_subset)
        ans.pop()
        while(idx+1 < len(nums) and nums[idx]==nums[idx+1]):
            idx += 1
        self.get_subset(nums,ans,idx+1,all_subset)     
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ans:list = []
        all_subset:list = []
        self.get_subset(nums,ans,0,all_subset) 
        return all_subset