#include <iostream>

int lengthOfLastWord(std::string s) {
  size_t pnt = s.rfind(' ');
  int counter = 0;

  for (int i = 0; i < s.substr(pnt).length(); i++) {
    counter++;
  }

  return counter;
}

int main() {
  std::cout << lengthOfLastWord("Hello World") << "\n";
  std::cout << lengthOfLastWord("   fly me   to   the moon  ") << "\n";
  std::cout << lengthOfLastWord("luffy is still joyboy") << "\n";

  return 0;
}