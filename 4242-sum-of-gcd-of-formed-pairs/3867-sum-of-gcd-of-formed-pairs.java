class Solution {
    public int gcd(int a, int b){
        a = Math.abs(a); b = Math.abs(b);
        while(b!=0){
            int r = a%b;
            a = b;
            b = r; 
        }
        return a;
    }
    public long gcdSum(int[] nums) {
        int n = nums.length;
        int[] prefGcd = new int[n];
        int mx = nums[0];
        for(int i=0; i<n; i++){
            if(nums[i]>=mx) mx = nums[i];
            prefGcd[i] = gcd(mx, nums[i]);
        }
        Arrays.sort(prefGcd);
        long sum = 0;
        int l=0, r = n-1;
        while(l<r){
            sum += gcd(prefGcd[l], prefGcd[r]);
            l++; r--;
        }
        return sum;
    }
}
