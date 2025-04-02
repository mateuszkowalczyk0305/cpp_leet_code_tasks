#include <algorithm>
#include <iostream>
#include <vector>

int arrayPairSum(std::vector<int> &nums) {
  int result = 0;
  std::sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size(); i += 2) {
    result += nums[i];
  }

  return result;
}

int main() {
  std::vector<int> a = {1, 4, 3, 2};
  std::vector<int> b = {6, 2, 6, 5, 1, 2};

  std::cout << arrayPairSum(a) << "\n";
  std::cout << arrayPairSum(b) << "\n";

  return 0;
}