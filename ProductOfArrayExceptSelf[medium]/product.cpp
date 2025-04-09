#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(const std::vector<int> &nums) {
  int n = nums.size();
  std::vector<int> result(n, 1);

  int left = 1;
  for (int i = 0; i < n; ++i) {
    result[i] = left;
    left *= nums[i];
  }

  int right = 1;
  for (int i = n - 1; i >= 0; --i) {
    result[i] *= right;
    right *= nums[i];
  }

  return result;
}

int main() {
  std::vector<int> nums = {1, 2, 3, 4};
  std::vector<int> result = productExceptSelf(nums);

  for (int num : result) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}