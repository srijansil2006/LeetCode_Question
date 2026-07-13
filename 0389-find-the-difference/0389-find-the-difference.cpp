class Solution {
public:
    char findTheDifference(string s, string t) {
        int x = 0;
        for(char c : s) x ^= (c-'a');
        for(char c : t) x ^= (c-'a');
        return (x+'a');
    }
};