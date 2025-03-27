#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {

    std::vector<int> final;
    int pnt1;
    int pnt2;

    for (size_t i = 0; i < nums.size(); i++) {
      for (size_t j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          pnt1 = i;
          pnt2 = j;
        }
      }
    }
    final.push_back(pnt1);
    final.push_back(pnt2);
    return final;
  }
};