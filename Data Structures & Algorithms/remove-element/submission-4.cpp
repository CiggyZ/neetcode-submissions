class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int caseSwaps = 0;
        int numsSize = nums.size();
        for (int i = 0; i < numsSize; ++i) {
            if (nums[i] == val) {
                for (auto j = i + 1; j < numsSize; ++j) {
                    nums[j - 1] = nums[j];
                }
                --i;
                --numsSize;
                ++caseSwaps;
            }
        }
        return (nums.size() - caseSwaps);
    };
};
