//
// Created by bruce on 2/23/23.
//

#include "Solution.h"
#include <iostream>

int main(int argc, char const* argv[]) {
    vector<int> vec1 = {1, 2};
    vector<int> vec2 = {3, 4};

    cout << Solution::findMedianSortedArrays(vec1, vec2) << endl;
    return 0;
}