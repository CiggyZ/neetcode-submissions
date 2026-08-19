#include <vector>
#include <string>

using std::vector;
using std::string;

class Solution {
public:
    bool isValid(string s) {

        vector<char> tempStack;
        for (int i = 0; i < s.size(); ++i) {

            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                tempStack.push_back(s[i]);
            }

            else {
                if (tempStack.empty()) {
                    return false;
                }

                if (tempStack.back() == '{' && s[i] == '}') {
                    tempStack.pop_back();
                }

                else if (tempStack.back() == '[' && s[i] == ']') {
                    tempStack.pop_back();
                }

                else if (tempStack.back() == '(' && s[i] == ')') {
                    tempStack.pop_back();
                }

                else {
                    return false;
                }
            }
        }

        return tempStack.empty();
    }
};