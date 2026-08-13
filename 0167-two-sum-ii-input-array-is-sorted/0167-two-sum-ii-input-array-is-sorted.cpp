class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0, r=n-1;
        vector<int>res;
        while(r>=l){
            if((nums[l]+nums[r])<target) l++;
            else if((nums[l]+nums[r])>target) r--;
            else{
                res.push_back(l+1);
                res.push_back(r+1);
                break;
            }
        }
        return res;
    }
};