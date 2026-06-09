#define ZEROLENGTH 0

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int currMax = {}, tempVal = {};
        auto sizeArr = arr.size();

        if (sizeArr == 0) {
            return arr;
        }
        
        currMax = arr[arr.size() - 1];
        arr[arr.size() - 1] = -1;

        if (sizeArr == 1) {
            return arr;
        }

        for (auto itr = sizeArr - 2; itr > 0; --itr) {
            tempVal = arr[itr];
            arr[itr] = currMax;

            if (tempVal > currMax) {
                currMax = tempVal;
            }
        }

        arr[0] = currMax;

        return arr;
    }
};