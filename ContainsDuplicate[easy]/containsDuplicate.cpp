#include <algorithm>
#include <iostream>
#include <vector>

bool containsDuplicate(std::vector<int> &nums) {
  std::sort(nums.begin(), nums.end());
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] == nums[i - 1]) {
      return true;
    }
  }
  return false;
}

int main() {
  // Data:
  std::vector<int> a = {1, 2, 3, 1};
  std::vector<int> b = {1, 2, 3, 4};
  std::vector<int> c = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

  // Function test:
  std::cout << containsDuplicate(a);
  std::cout << containsDuplicate(b);
  std::cout << containsDuplicate(c);

  return 0;
}
