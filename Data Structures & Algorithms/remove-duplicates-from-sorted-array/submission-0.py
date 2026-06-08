class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        leftPtr, rightPtr = 0, 1

        while (rightPtr < len(nums)):
            if nums[leftPtr] < nums[rightPtr]:
                nums[leftPtr + 1] = nums[rightPtr]
                leftPtr += 1
            
            rightPtr += 1

        return leftPtr + 1
