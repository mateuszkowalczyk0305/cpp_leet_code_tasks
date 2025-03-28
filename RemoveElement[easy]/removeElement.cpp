#include <iostream>
#include <vector>

int removeElement(std::vector<int> &nums, int val) {
  int result = 0;
  std::vector<int> final{};

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == val) {
      nums.erase(nums.begin() + i);
      i--;
    }
  }

  for (int j = 0; j < nums.size(); j++) {
    result++;
  }
  return result;
}

int main() {
  std::cout << "\n ex1`: \n";
  std::vector<int> a{3, 2, 2, 3};
  std::cout << removeElement(a, 3) << "\n";
  std::cout << "\n ex2: \n";
  std::vector<int> b{0, 1, 2, 2, 3, 0, 4, 2};
  std::cout << removeElement(b, 2) << "\n";
  return 0;
}