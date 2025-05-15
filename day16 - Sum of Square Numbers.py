class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        left = 0
        right = int(math.sqrt(c))
        while left <= right:
            check = left**2 + right**2
            if check == c:
                return True
            elif check < c:
                left += 1
            else:
                right -= 1
        return False