class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int currMax = arr[arr.size() - 1];
        int tempNum{};
        arr[arr.size() - 1] = -1;

        for (int i = arr.size() - 2; i >= 0; --i) {
            tempNum = arr[i];
            arr[i] = currMax;
            if (tempNum > currMax) {
                currMax = tempNum;
            }
        }
        return arr;
    }
};