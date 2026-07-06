class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>prev = {0, 1};
        for(int i=2; i<=n; i++){
            vector<int>curr;
            for(int j=0; j<prev.size(); j++) curr.push_back(prev[j]);
            for(int j=prev.size()-1; j>=0; j--) curr.push_back(prev[j]+(1LL<<(i-1)));
            prev.assign(curr.begin(), curr.end());
        }
        return prev;
    }
};