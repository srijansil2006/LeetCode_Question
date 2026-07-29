class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        rows, cols = len(grid) , len(grid[0])
        dp = [0] * cols 
        dp[0] = grid[0][0]
        for j in range(1, cols):
            dp[j] = dp[j-1] + grid[0][j]
        for i in range(1, rows):
            dp[0] += grid[i][0]
            for j in range(1, cols):
                dp[j] = grid[i][j] + min(dp[j], dp[j-1])    
        return dp[-1]        