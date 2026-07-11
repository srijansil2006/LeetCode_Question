class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int closest = 1e8;
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(abs(closest-t)>abs(t-sum))closest = sum;
                if(sum>t) r--;
                else if(sum<t) l++;
                else return t;
            }
        }
        return closest;
    }
};