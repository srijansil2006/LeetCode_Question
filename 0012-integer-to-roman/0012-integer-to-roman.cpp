class Solution {
public:
    string intToRoman(int num) {
        vector<int>a = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string>b = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string str = "";
        int idx = 0;
        for(int i=0; i<13; i++){
            while(num>=a[i]){
                str += b[i];
                num -= a[i];
            }
            if(num==0) return str;
        }
        return str;
    }
};