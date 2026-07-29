class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        def factorial(k:int)->int:
            fac:int = 1
            for i in range(1,k+1):
                fac *=i
            return fac
        return (factorial(m+n-2)//factorial(m-1))//factorial(n-1)       