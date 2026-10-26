class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currCount = 0;
        int numSize = nums.size();

        for (int i = 0; i < numSize; ++i) {
            if (nums[i] == 0) {
                if (currCount > maxCount) {
                    maxCount = currCount;
                }
                currCount = 0;
            }

            else {
                currCount++;
            }
        
        }

        if (currCount > maxCount) {
            maxCount = currCount;
        }

        return maxCount;
    }
};