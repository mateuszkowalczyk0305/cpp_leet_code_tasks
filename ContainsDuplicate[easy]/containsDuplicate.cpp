#include <iostream>
#include <vector>

bool containsDuplicate(std::vector<int> &nums) {
  bool result = false;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = nums.size() - 1; j >= 0; j--) {
      if (nums[i] == nums[j] && i != j) {
        result = true;
        goto end;
      }
    }
  }
end:
  return result;
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
