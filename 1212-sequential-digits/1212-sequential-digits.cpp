class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>arr;
        string str = "123456789";
        int dl = 0, dh = 0;
        int num = low;
        while(num>0){
            dl++;
            num /= 10;
        }
        num = high;
        while(num>0){
            dh++;
            num /= 10;
        }
        for(int i=dl; i<=dh; i++){
            int l = 0;
            while(l+i<10){
                string s = str.substr(l, i);
                int n = std::stoi(s);
                if(n>=low && n<=high) arr.push_back(n);
                l++;
            }
        }
        return arr;
    }
};