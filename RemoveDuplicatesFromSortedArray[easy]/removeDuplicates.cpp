#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &nums) {
  for (int i = nums.size() - 1; i > 0; i--) {
    if (nums[i] == nums[i - 1]) {
      nums.erase(nums.begin() + i);
    }
  }
  return nums.size();
}

int main() {
  std::vector<int> a = {1, 1, 2};
  std::cout << removeDuplicates(a);
  std::cout << "\n";
  std::vector<int> b = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  std::cout << removeDuplicates(b);

  return 0;
}