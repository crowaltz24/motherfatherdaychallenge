class Solution:
    def checkValidString(self, s: str) -> bool:
        a, b = 0, 0

        for c in s:
            if c == "(":
                a, b = a + 1, b + 1
            elif c == ")":
                a, b = a - 1, b - 1
            else:
                a, b = a - 1, b + 1
            if b < 0:
                return False
            if a < 0:
                a = 0
        return a == 0