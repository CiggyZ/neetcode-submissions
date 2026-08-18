#include <string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> opStack;
        int tempNum{};
        int sumScores{};
        for (auto itr : operations) {

        if (itr == "D"){
            tempNum = 2 * opStack[opStack.size() - 1];
            opStack.push_back(tempNum);
        }
                
        else if (itr == "C") {
            opStack.pop_back();
        }

        else if (itr == "+") {
            tempNum = opStack[opStack.size() - 1] + opStack[opStack.size() - 2];
            opStack.push_back(tempNum);
            
        }
        else {
            opStack.push_back(stoi(itr));
        }
        }

        for (auto itr : opStack) {
            sumScores += itr;
        }

        return sumScores;
    }
};