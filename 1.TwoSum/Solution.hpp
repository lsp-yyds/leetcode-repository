//
// Created by bruce on 1/30/23.
//

#include <iostream>
#include <vector>

// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
  public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); ++i)
            for (int j = i + 1; j < nums.size(); ++j)
                if (nums[i] + nums[j] == target)
                    return {i, j};

        throw std::invalid_argument("the input has no solution");
    }
};

void print_vec(const std::vector<int>& vec) {
    std::cout << "[";
    for (int i = 0; i < vec.size() - 1; ++i)
        std::cout << vec[i] << ",";
    std::cout << vec[vec.size() - 1] << "]";
}