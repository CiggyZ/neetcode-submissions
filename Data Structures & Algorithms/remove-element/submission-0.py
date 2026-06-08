class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        notUnique = 0
        for i in range(len(nums) - 1, -1, -1):
            if nums[i] == val:
                notUnique += 1
                for j in range(i + 1, len(nums)):
                        nums[j - 1] = nums[j]
        return len(nums) - notUnique

