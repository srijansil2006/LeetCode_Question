class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>arr;
        string str = "123456789";
        for(int i=2; i<=9; i++){
            int l = 0;
            while(l+i <=9){
                string s = str.substr(l, i);
                int n = std::stoi(s);
                if(n>=low && n<=high) arr.push_back(n);
                l++;
            }
        }
        return arr;
    }
};