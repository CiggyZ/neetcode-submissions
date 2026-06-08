class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //Let's trying making a set based solution instead in this given situation.
        std::set<int> mySet(nums.begin(), nums.end());

        if (nums.size() == mySet.size()) {
            return false;
        }
        else {
            return true;
        }
    }
};