class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> tempStack;
        int tempValue{0};
        // They added allot of constraints for us, so it's actually easier to deal with.
        for (auto i = 0; i < operations.size(); ++i) {
            if (operations[i] == "D") {
                tempValue = tempStack[tempStack.size() - 1];
                tempValue *= 2;
                tempStack.push_back(tempValue);
            }
            else if (operations[i] == "C") {
                tempStack.pop_back();
            }
            else if (operations[i] == "+") {
                tempValue = tempStack[tempStack.size() - 1];
                tempValue += tempStack[tempStack.size() - 2];
                tempStack.push_back(tempValue);
            }
            else {
                tempStack.push_back(std::stoi(operations[i]));
            }
        }

        tempValue = 0;
        for (auto i : tempStack) {
            tempValue += i;
        }
        return tempValue;
    }
};