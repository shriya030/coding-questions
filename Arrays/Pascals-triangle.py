https://leetcode.com/problems/pascals-triangle/


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        li = []
        for i in range(numRows):
            inside = []
            for row in range(i + 1):
                item = factorial(i)//(factorial(row) * factorial(i-row))
                inside.append(item)
            li.append(inside)
        return li
                
