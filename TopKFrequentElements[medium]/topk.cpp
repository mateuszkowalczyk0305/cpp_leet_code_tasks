#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
  std::vector<int> result = {};
  // 1. Create unordered_map:
  std::unordered_map<int, int> freq;

  // 2. Mapping nums with numbers of duplications:
  for (auto num : nums) {
    freq[num]++;
    ;
  }

  //   // Debug: printing map:
  //   for (const auto &pair : freq) {
  //     std::cout << "Element: " << pair.first
  //               << " -> Liczba wystąpień: " << pair.second << "\n";
  //   }

  // 3. Creating vector of pairs:
  std::vector<std::pair<int, int>> sortedFreq(freq.begin(), freq.end());

  // 4. Sorting vector:
  std::sort(sortedFreq.begin(), sortedFreq.end(),
            [](auto &a, auto &b) { return a.second > b.second; });

  // 5. Adding top 3 most frequently used numbers to result vector:
  for (int i = 0; i < k; i++) {
    result.push_back(sortedFreq[i].first);
  }

  // 6. Return result:
  return result;
}

int main() {
  std::vector<int> a = {1, 1, 1, 2, 2, 3};
  for (int nr : topKFrequent(a, 2)) {
    std::cout << nr << " ";
  }

  std::cout << "\n ";

  std::vector<int> b = {1};
  for (int nr : topKFrequent(b, 1)) {
    std::cout << nr << " ";
  }
  return 0;
}