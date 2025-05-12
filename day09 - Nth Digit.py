class Solution:
    def findNthDigit(self, n: int) -> int:
        n -= 1
        res = 0
        for digits in range(1, 11):
            first = 10**(digits - 1)
            if n < 9 * first * digits:
                res = int(str(first + n/digits)[n%digits])
                return res
            n -= 9 * first * digits