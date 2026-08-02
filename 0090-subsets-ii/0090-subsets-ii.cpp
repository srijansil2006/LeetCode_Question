class Solution {
public:
    void subsets(int idx, vector<int>&nums, vector<vector<int>>&result, vector<int>&set){
        if(idx == nums.size()){
            result.push_back({set});
            return;
        }
        set.push_back(nums[idx]);
        subsets(idx+1, nums, result, set);
        set.pop_back();
        while(idx+1<nums.size() && nums[idx]==nums[idx+1])
            idx+=1;
        subsets(idx+1, nums, result, set);    
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>>result;
        vector<int>set;
        subsets(0, nums, result, set);
        return result;
    }
};