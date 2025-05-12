class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        vec = [-1] * (n + 1)
        for num in nums:
            vec[num] = num
        for i in range(len(vec)):
            if vec[i] == -1:
                return i
        return vec