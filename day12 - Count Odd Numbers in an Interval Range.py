class Solution:
    def countOdds(self, low: int, high: int) -> int:
        x = 0
        if (low % 2 != 0) or (high % 2 != 0):
            x = 1
        res = (high-low)//2 + x
        return res