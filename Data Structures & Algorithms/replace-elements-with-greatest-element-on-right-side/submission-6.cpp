class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

    int currMax = -1;
    int tempMax = 0;
    for (auto i = arr.size() - 1; i > 0; --i) {
        tempMax = arr[i];
        arr[i] = currMax;

        if (tempMax > currMax) {
            currMax = tempMax;
        }
    }

    arr[0] = currMax;

    return arr;
    }
};