class Solution {
public:
    vector<int> decode(vector<int>& enc, int fi) {
        int n = enc.size();
        vector<int>rl(n+1, 0);
        rl[0] = fi;
        for(int i=0; i<n; i++){
            rl[i+1] = rl[i]^enc[i];
        }
        return rl;
    }
};