class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> tempNums;
        int countCase = 0;

        for (auto i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                tempNums.push_back(nums[i]);
                ++countCase;
            }
        }

        for (auto i = 0; i < countCase; ++i) {
            nums[i] = tempNums[i];
        }
        // Something is going on with how the function should be doing things.
    return countCase;
};

};