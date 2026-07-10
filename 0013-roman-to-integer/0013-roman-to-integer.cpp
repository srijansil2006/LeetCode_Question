class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> roman_map = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int total = 0;
        int prev_val = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            int curr_val = roman_map[s[i]];
            
            if (curr_val < prev_val) {
                total -= curr_val;
            } else {
                total += curr_val;
            }
            
            prev_val = curr_val;
        }
        return total;
    }
};