class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        auto sizeNums = nums.size();
        int maxVal = {}, countVal = {};

        for (auto itr = 0; itr < nums.size(); ++itr) {
            if (nums[itr] != 0) {
                countVal++;
            }
            else {
                if (countVal > maxVal){
                    maxVal = countVal;
                }
                countVal = 0;
            }
        }

        if (countVal > maxVal) {
            maxVal = countVal;
        }

        return maxVal;
    }
};