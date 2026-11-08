class Solution {
public:
    int partitionArray(vector<int>& a, int k) {
        int n = a.size();
        sort(a.begin(), a.end());
        int mx = a[0], mn = a[0];
        int cnt = 1;
        for(int i=1; i<n; i++){
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
            if(mx-mn>k){
                cnt++;
                mx = a[i];
                mn = a[i];
            }
        }
        return cnt;
    }
};