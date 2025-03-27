#include <iostream>
#include <vector>

bool isPalindrome(int x) {
  if (x < 0)
    return false;

  std::string integer = std::to_string(x);
  int n = integer.length();

  for (int i = 0; i < n / 2; i++) {
    if (integer[i] != integer[n - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  bool checker = true;
  checker = isPalindrome(121);
  std::cout << checker << "\n";
  checker = isPalindrome(-121);
  std::cout << checker << "\n";
  checker = isPalindrome(10);
  std::cout << checker << "\n";
}