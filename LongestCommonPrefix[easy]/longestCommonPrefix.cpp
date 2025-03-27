#include <iostream>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> &strs) {
  std::string result = "";

  for (int i = 0; i < strs[0].length(); i++) {
    for (int j = 0; j < strs.size(); j++) {
      if (i >= strs[j].length() || strs[j][i] != strs[0][i]) {
        goto done;
      }
    }
    result += strs[0][i];
  }
done:
  return result;
}

int main() {
  std::vector<std::string> a{"flower", "flowpot", "flights"};
  std::vector<std::string> b{"dog", "racecar", "car"};

  std::cout << longestCommonPrefix(a) << "\n";
  std::cout << longestCommonPrefix(b) << "\n";

  return 0;
}