class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        result= []
        for i in range(numRows):
            if(i == 0):
                result.append([1])
            else:
                prev = result[-1]
                curr = [1]
                for j in range(1,i):
                    curr.append(prev[j-1]+prev[j])
                curr.append(1)
                result.append(curr[:])
        return result                
