class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        auto originalSize = nums.size();

        for (auto itr = 0; itr < originalSize; ++itr) {
            nums.push_back(nums[itr]);
        } 

        return nums;
    }
};