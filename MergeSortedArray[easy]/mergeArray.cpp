#include <algorithm>
#include <iostream>
#include <vector>

void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
  nums1.erase(nums1.begin() + m, nums1.end());

  for (int i = 0; i < n; i++) {
    nums1.push_back(nums2[i]);
  }

  std::sort(nums1.begin(), nums1.end());

  for (int num : nums1) {
    std::cout << num;
  }
}

int main() {
  std::vector<int> a1 = {1, 2, 3, 0, 0, 0};
  std::vector<int> a2 = {2, 5, 6};
  merge(a1, 3, a2, 3);
}