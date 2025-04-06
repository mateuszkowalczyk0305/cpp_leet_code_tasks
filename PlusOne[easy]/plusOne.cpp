#include <iostream>
#include <string>
#include <vector>

std::vector<int> plusOne(std::vector<int> &digits) {
  std::string numberStr = "";
  int number = 0;

  for (int digit : digits) {
    numberStr += std::to_string(digit);
  }

  number = std::stoi(numberStr);
  number++;

  std::vector<int> result;
  std::string numberSize = std::to_string(number);

  for (int i = 0; i < numberSize.length(); i++) {
    std::stoi(numberSize);
    result.push_back(numberSize[i]);
  }

  for (int res : result) {
    std::cout << res << " ";
  }

  std::cout << "\n";

  return result;
}

int main() {
  std::vector<int> a = {1, 2, 3};
  std::vector<int> b = {4, 3, 2, 1};
  std::vector<int> c = {9};

  plusOne(a);
  plusOne(b);
  plusOne(c);

  return 0;
}