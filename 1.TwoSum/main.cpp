//
// Created by bruce on 2/23/23.
//

#include "Solution.h"

int main(int argc, char const* argv[]) {
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