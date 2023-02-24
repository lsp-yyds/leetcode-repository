//
// Created by bruce on 2/1/23.
//

#include <unordered_set>

bool checkRepetition(std::string& s, int start, int end) {
    std::unordered_set<char> chars;

    for (int i = start; i <= end; ++i) {
        char c = s[i];

        if (chars.count(c)) {
            return false;
        }
        chars.insert(c);
    }

    return true;
}

class Solution {
  public:
    static int lengthOfLongestSubstring(std::string s) {

        int res{0};
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i; j < s.size(); ++j) {
                if (checkRepetition(s, i, j)) {
                    res = std::max(res, j - i + 1);
                }
            }
        }
        return res;
    }
};