#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        auto numsSize = nums.size();

        if (numsSize != 0) {
            std::sort(nums.begin(), nums.end());
            for (auto itr = 1; itr < numsSize; ++itr) {
                if (nums[itr] == nums[itr - 1]) {
                    return true;
                }
            }
            return false;
        }

        else {
            return false;
        }
    }
};