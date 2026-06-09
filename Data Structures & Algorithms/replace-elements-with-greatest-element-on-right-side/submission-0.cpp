#define ZEROLENGTH 0

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        auto arrSize = arr.size();
        int currMax = 0;
        if (arrSize == ZEROLENGTH) { 
            return arr;
        }

        for (auto itr = 0; itr < arrSize - 1; ++itr) {
            currMax = arr[itr + 1];
            for (auto jItr = itr + 1; jItr < arrSize; ++jItr) {
                if (arr[jItr] > currMax) {
                    currMax = arr[jItr];
                }
            }
            arr[itr] = currMax;
        }

        arr[arr.size() - 1] = -1;

        return arr;
    }
};