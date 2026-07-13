class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>a(arr.begin(), arr.end());
        std::sort(a.begin(), a.end());
        unordered_map<int,int>mp;
        int rank = 1;
        for(int i=0; i<n; i++){
            if(mp.count(a[i])==0){
                mp[a[i]] = rank;
                rank++;
            }
        }
        for(int i=0; i<n; i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};