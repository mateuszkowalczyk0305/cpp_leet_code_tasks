#include <algorithm>
#include <iostream>
#include <vector>

int searchInsert(std::vector<int> &nums, int target) {
  int result = 0;
  nums.push_back(target);
  std::sort(nums.begin(), nums.end());

  for (auto num : nums) {
    std::cout << num << " ";
  }

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == target) {
      return i;
    }
  }
  return 0;
}

int main() {
  std::vector<int> a = {1, 3, 5, 6};

  //   std::cout << searchInsert(a, 5) << "\n";
  //   std::cout << searchInsert(a, 2) << "\n";
  std::cout << searchInsert(a, 7) << "\n";

  return 0;
}