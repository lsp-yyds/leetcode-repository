//
// Created by bruce on 2/23/23.
//
#include "Solution.hpp"

int main(int argc, char const* argv[]) {
    string s = "babad";
    string s1 = "cbbd";
    cout << Solution::longestPalindrome(s) << endl;
    cout << Solution::longestPalindrome(s1) << endl;

    return 0;
}