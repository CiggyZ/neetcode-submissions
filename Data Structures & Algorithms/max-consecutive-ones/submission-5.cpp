class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currCount = 0;
        int maxCount = 0;

        for (int i = 0; i < nums.size(); ++i) {
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