class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        tempMem = len(nums)
        for i in range(0, tempMem):
            nums.append(nums[i])
        ans = nums
        return ans