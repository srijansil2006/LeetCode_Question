class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.lstrip(' ')
        if s == '':
            return 0
        negative = s[0] == '-'
        if negative or s[0] == '+':
            s = s[1:]
        s = s.lstrip('0')
        digits = [str(i) for i in range(10)]
        i = 0
        while i < len(s) and s[i] in digits:
            i = i + 1
        s = s[:i]
        if s == '':
            return 0
        x = int(s)
        if negative:
            x = -x
        if x < -2**31:
            return -2**31
        elif x > 2**31 - 1:
            return 2**31 - 1  
        return x