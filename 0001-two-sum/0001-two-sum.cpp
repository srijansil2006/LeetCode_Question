class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int>mp;
        vector<int>a;
        for(int i=0; i<n; i++){
            if(mp.count(target-nums[i])){
                a.push_back(mp[target-nums[i]]);
                a.push_back(i);
                break;
            }else mp[nums[i]] = i;
        }
        return a;
    }
};