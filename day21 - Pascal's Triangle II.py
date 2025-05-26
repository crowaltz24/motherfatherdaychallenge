class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        result = [1]
        for i in range(1, rowIndex+1):
            op = result[-1] * (rowIndex - i + 1) // i
            result.append(op)
        return result