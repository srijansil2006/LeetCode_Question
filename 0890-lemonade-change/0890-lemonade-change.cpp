class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0, ten = 0;
        for(int i=0; i<n; i++){
            if(bills[i]==5) five++;
            else if(bills[i]==10){
                if(five>0){
                    five--;
                    ten++;
                }else return 0;
            }else{
                if(ten>0 && five>0){
                    five--; ten--;
                }
                else if(five>2) five -= 3;
                else return 0;
            }
        }
        return 1;
    }
};