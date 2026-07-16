class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if((int(dividend/divisor) > 2**31 - 1)):
            return 2**31 - 1
        elif(int(dividend/divisor) < -2**31):
            return -2**31    
        elif(dividend>=0 and divisor>=0):
            return dividend//divisor
        elif(dividend<0 and divisor<0):
            return int(dividend/divisor)    
        elif(dividend<0 or divisor<0):
            return -int(abs(dividend)/abs(divisor))