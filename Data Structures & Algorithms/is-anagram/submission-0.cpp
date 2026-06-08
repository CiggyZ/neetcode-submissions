class Solution {
public:
    bool isAnagram(string s, string t) {
        //This can be done in O(n) complexity, by having 2 arrays, where each index stores the ASCII value.
        if (s.length() != t.length()) {
            return false;
        }
        
        int asciiArrayS[128] = {};
        int asciiArrayT[128] = {};

        for (auto itr = 0; itr < s.length(); ++itr){ 
            ++asciiArrayS[char(s[itr])];
            ++asciiArrayT[char(t[itr])];
        }

        for (auto itr = 0; itr < 128; ++itr) {
            if (asciiArrayS[itr] != asciiArrayT[itr]) {
                return false;
            }
        }

        return true;
    }
};
