//
// Created by bruce on 2/21/23.
//

#include <vector>
using namespace std;

vector<int> merge(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> vec;
    auto it1 = vec1.cbegin();
    auto it2 = vec2.cbegin();
    // [1,3] [2]
    while (it1 != vec1.cend() || it2 != vec2.cend()) {
        if (it1 == vec1.cend()) {
            vec.push_back(*it2);
            ++it2;
        } else if (it2 == vec2.cend()) {
            vec.push_back(*it1);
            ++it1;
        } else if (*it1 < *it2) {
            vec.push_back(*it1);
            ++it1;
        } else {
            vec.push_back(*it2);
            ++it2;
        }
    }

    return vec;
}

class Solution {
  public:
    static double findMedianSortedArrays(vector<int>& nums1,
                                         vector<int>& nums2) {
        vector<int> vec = merge(nums1, nums2);
        if (vec.size() % 2 != 0)
            return static_cast<double>(vec[vec.size() / 2]);
        else
            return static_cast<double>(vec[vec.size() / 2 - 1] +
                                       vec[vec.size() / 2]) /
                   2;
    }
};