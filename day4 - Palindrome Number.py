class Solution(object):
    def isPalindrome(self, x):
        i = 0
        j = -1
        x = str(x)
        while i < (len(x)//2)+1:
            if x[i] != x[j]:
                return False
            i += 1
            j -= 1
        
        return True