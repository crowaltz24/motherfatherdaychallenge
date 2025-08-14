class Solution:
    def makeSmallestPalindrome(self, s: str) -> str:
        ans = list(s)
        n = len(s)

        for i in range(n//2):
            ans[i] = ans[n-i-1] = min (ans[i], ans[n-i-1])

        return ''.join(ans)