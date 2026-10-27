#include <string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> tempStack;
        int tempValue{0};
        // They added allot of constraints for us, so it's actually easier to deal with.
        
        //Decided to use this method, as it uses a Jump Table instead, and this allows the compiler to use like a jump table implementation, I learned this from assembly on pwn.college lol
        for (auto i = 0; i < operations.size(); ++i) {
            switch (operations[i][0]) {
                case 'D':
                    tempValue = tempStack[tempStack.size() - 1];
                    tempValue *= 2;
                    tempStack.push_back(tempValue);
                    break;

                case 'C':
                    tempStack.pop_back();
                    break;

                case '+':
                    tempValue = tempStack[tempStack.size() - 1];
                    tempValue += tempStack[tempStack.size() - 2];
                    tempStack.push_back(tempValue);
                    break;

                default:
                    // Was thinking of converting directly, but realized only works for single digits that don't have negatives, and that would require some extra algo.
                    tempStack.push_back(std::stoi(operations[i]));
                    break;
            }
        }

        tempValue = 0;
        for (auto i : tempStack) {
            tempValue += i;
        }
        return tempValue;
    }
};
