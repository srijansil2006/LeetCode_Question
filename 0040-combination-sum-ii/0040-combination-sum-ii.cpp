class Solution {
public:

    void backtrack(vector<int>& nums,vector<int>& ans,vector<vector<int>>& result,int start,int target){
        if(target == 0){
            result.push_back({ans});
            return;
        }
        for(int i = start; i < nums.size(); i++){
            if(i > start && nums[i] == nums[i-1]) continue;
            if(nums[i] > target) break;
            ans.push_back(nums[i]);
            backtrack(nums, ans, result, i+1, target - nums[i]);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> ans;
        backtrack(candidates,ans,result,0,target);
        return result;
    }
};