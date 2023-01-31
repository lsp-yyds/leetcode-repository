//
// Created by bruce on 1/30/23.
//

#include <iostream>
#include <vector>

// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
  public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {

        for (int i = 0; i < nums.size(); ++i)
            for (int j = i + 1; j < nums.size(); ++j)
                if (nums[i] + nums[j] == target)
                    return {i, j};

        throw std::invalid_argument("the input has no solution");
    }
};

void print_vec(const std::vector<int> &vec) {
    std::cout << "[";
    for (int i = 0; i < vec.size() - 1; ++i)
        std::cout << vec[i] << ",";
    std::cout << vec[vec.size() - 1] << "]";
}

int main(int argc, char const *argv[]) {
    std::vector<int> nums1 = {2, 7, 11, 5};
    int target1 = 9;
    print_vec(Solution().twoSum(nums1, target1));

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    print_vec(Solution().twoSum(nums2, target2));

    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    print_vec(Solution().twoSum(nums3, target3));

    return 0;
}