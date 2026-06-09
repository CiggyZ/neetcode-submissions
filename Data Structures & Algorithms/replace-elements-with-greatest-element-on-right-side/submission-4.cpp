#define ZEROLENGTH 0

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int currMax = {}, tempVal = {};
        int sizeArr = arr.size();

        if (sizeArr == ZEROLENGTH) {
            return arr;
        }
        
        currMax = arr[arr.size() - 1];
        arr[arr.size() - 1] = -1;

        if (sizeArr == 1) {
            return arr;
        }

        for (int itr = sizeArr - 2; itr >= 0; --itr) {
            tempVal = arr[itr];
            arr[itr] = currMax;

            if (tempVal > currMax) {
                currMax = tempVal;
            }
        }

        return arr;
    }
};