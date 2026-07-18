class Solution {
    public int[] searchRange(int[] nums, int target) {
        int n = nums.length;
        int l = 0, r =n-1;
        int st = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]>target) r = mid-1;
            else if(nums[mid]<target) l = mid+1;
            else{
                st = mid;
                if(mid>0 && nums[mid]==nums[mid-1]) r = mid-1;
                else break;
            }
        }
        int[] a = {-1, -1};
        if(st==-1) return a;
        l = st; r = n-1;
        int ed = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]>target) r = mid-1;
            else if(nums[mid]<target) l = mid+1;
            else{
                ed = mid;
                if(mid<n-1 && nums[mid]==nums[mid+1]) l = mid+1;
                else break;
            }
        }
        a[0] = st; a[1] = ed;
        return a;
    }
}