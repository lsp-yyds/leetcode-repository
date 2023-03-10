//
// Created by bruce on 2/24/23.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    static string longestPalindrome(const string& s) {
        auto i{0};
        vector<string> vec;
        for (auto it1 = s.cbegin(); it1 != s.cend(); ++it1, ++i) {
            for (auto it2 = it1 + 1; it2 != s.cend(); ++it2) {
                if (*it2 == *it1 && vec.empty()) {
                    vec.push_back(s.substr(i, it2 - it1 + 1));
                    break;
                } else if (*it2 == *it1 && !vec.empty()) {
                    if (it2 - it1 + 1 > vec[vec.size() - 1].size()) {
                        vec.pop_back();
                        vec.push_back(s.substr(i, it2 - it1 + 1));
                    }
                    break;
                }
            }
        }
        return vec[vec.size() - 1];
    }
};

#endif // LEETCODE_SOLUTION_H
