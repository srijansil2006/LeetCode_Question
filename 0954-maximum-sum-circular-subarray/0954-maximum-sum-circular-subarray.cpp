class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tsum = 0;
        int mxSm = INT_MIN, crMx = 0;
        int mnSm = INT_MAX, crMn = 0;
        for (int x : nums) {
            tsum += x;
            crMx += x;
            mxSm = max(mxSm, crMx);
            if (crMx < 0) crMx = 0;
            crMn += x;
            mnSm = std::min(mnSm, crMn);
            if (crMn > 0) crMn = 0;
        }
        if (mxSm < 0) return mxSm;        
        return std::max(mxSm, tsum - mnSm);
    }
};