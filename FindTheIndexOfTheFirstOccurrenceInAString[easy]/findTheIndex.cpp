#include <iostream>
#include <string>

// Metoda 1:

int strStr(std::string haystack, std::string needle) {
  int start = -1;
  for (int i = 0; i < haystack.length(); i++) {
    for (int j = 0; j < needle.length(); j++) {
      if (haystack[i] == needle[j]) {
        if (haystack.substr(i, needle.length()) == needle) {
          start = i;
          goto end;
        }
      }
    }
  }
end:
  return start;
}

// Metoda 2:

int stSt(std::string haystack, std::string needle) {
  std::size_t start_pos = haystack.find(needle);
  return static_cast<int>(start_pos);
}

int main() {
  std::cout << strStr("sadbutsad", "sad") << "\n";
  std::cout << "\n";
  std::cout << strStr("leetcode", "leeto") << "\n";
  std::cout << "\n";
  std::cout << stSt("sadbutsad", "sad") << "\n";
  std::cout << "\n";
  std::cout << stSt("leetcode", "leeto") << "\n";
  return 0;
}