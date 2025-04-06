#include <algorithm>
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

  while (number) {
    result.push_back(number % 10);
    number /= 10;
  }

  std::reverse(result.begin(), result.end());

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