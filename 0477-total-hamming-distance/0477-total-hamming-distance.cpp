class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<31; i++){
            int o = 0, z = 0;
            for(int j=0; j<n; j++){
                if(nums[j]&(1LL<<i))o++;
                else z++;
            }
            ans += o*z;
        }
        return ans;
    }
};