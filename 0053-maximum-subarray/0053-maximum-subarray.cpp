class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int mxSm = INT_MIN;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(mxSm < sum) mxSm = sum;
            if(sum<0) sum = 0;
        }
        return mxSm;
    }
};