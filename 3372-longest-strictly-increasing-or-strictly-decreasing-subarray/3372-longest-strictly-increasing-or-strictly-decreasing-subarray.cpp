class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int mxInc = 1, mxDec = 1;
        int inc = 1, dec = 1;
        for(int i=1; i<n; i++){
            if(nums[i]>nums[i-1]) inc++;
            else{
                mxInc = max(mxInc, inc);
                inc = 1;
            }
        }
        mxInc = max(mxInc, inc);
        for(int i=1; i<n; i++){
            if(nums[i]<nums[i-1]) dec++;
            else{
                mxDec = max(mxDec, dec);
                dec = 1;
            }
        }
        mxDec = max(mxDec, dec);
        return max(mxInc, mxDec);
    }
};