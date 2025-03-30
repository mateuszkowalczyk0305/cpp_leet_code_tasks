#include <iostream>
#include <vector>

bool isValid(std::string s) {
  bool result = false;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(') {
      for (int j = s.length(); j > i; j--) {
        if (s[j] == ')') {
          return true;
        }
      }
    }
    if (s[i] == '[') {
      for (int j = s.length(); j > i; j--) {
        if (s[j] == ']') {
          return true;
        }
      }
    }
    if (s[i] == '{') {
      for (int j = s.length(); j > i; j--) {
        if (s[j] == '}') {
          return true;
        }
      }
    }
  }
}

int main() {
  std::string a = "()";
  std::string b = "()[]{}";
  std::string c = "(]";
  std::string d = "([])";

  std::cout << isValid(a) << "\n";
  std::cout << isValid(b) << "\n";
  std::cout << isValid(c) << "\n";
  std::cout << isValid(d) << "\n";
  return 0;
}