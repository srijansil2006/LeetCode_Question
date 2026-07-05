class Solution {
public:
    static bool cmp(int a, int b){
        int cntA = __builtin_popcount(a);
        int cntB = __builtin_popcount(b);
        if (cntA != cntB) return cntA < cntB;
        return a < b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};