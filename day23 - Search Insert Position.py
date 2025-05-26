class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        def binary_search(arr, low, high, x):
            while low <= high:
                mid = (low + high)//2

                if arr[mid] == x:
                    return mid
                
                elif arr[mid] < x:
                    low = mid+  1

                elif arr[mid] > x:
                    high = mid - 1

            else:
                return low

        return binary_search(nums, 0, len(nums)-1, target)
                