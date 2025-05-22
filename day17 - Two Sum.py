class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        index = []
        for i in range(len(nums)):
            index.append((nums[i], i))
        index.sort()

        low = 0
        high = len(nums)-1
        
        while low < high:
            current_sum = index[low][0] + index[high][0]
            if current_sum == target:
                return [index[low][1], index[high][1]]
            elif current_sum < target:
                low += 1
            else:
                high -= 1