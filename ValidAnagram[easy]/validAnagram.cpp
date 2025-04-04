#include <iostream>
#include <string>

bool isAnagram(std::string s, std::string t) {
  if (s.length() != t.length()) {
    return false;
  }
  //   std::string temp;

  for (int i = 0; i < s.length(); i++) {
    for (int j = 0; j < s.length(); j++) {
      if (s[i] == t[j]) {
        t.erase(t.begin() + j);
        break;
      }
    }
  }

  if (t.length() == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  std::cout << isAnagram("anagram", "nagaram") << "\n";
  std::cout << isAnagram("rat", "car") << " \n";

  return 0;
}