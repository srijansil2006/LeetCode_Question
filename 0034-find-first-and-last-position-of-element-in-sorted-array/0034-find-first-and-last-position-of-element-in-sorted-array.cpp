class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        vector<int>a = {-1, -1};
        int st = INT_MAX;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]>target) r = mid-1;
            else if(nums[mid]<target) l = mid+1;
            else {
                st = min(st, mid);
                if(mid>0 && nums[mid-1]==nums[mid])r = mid-1;
                else break;
            }
        }
        if(st==INT_MAX) return a;
        l = st, r = n-1;
        int ed = INT_MIN;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]>target) r = mid-1;
            else if(nums[mid]<target) l = mid+1;
            else {
                ed = max(st, mid);
                if(mid<n-1 && nums[mid+1]==nums[mid])l = mid+1;
                else break;
            }
        }
        a[0] = st; a[1] = ed;
        return a;
    }
};