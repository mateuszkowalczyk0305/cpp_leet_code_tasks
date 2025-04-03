#include <iostream>
#include <string>

// // Mój pomysł, któy do końca nie działa (40 na 59 testów :()) i jest
// strasznie pomgmatwany: int lengthOfLastWord(std::string s) {
//   size_t last_c = std::string::npos;
//   size_t first_c = std::string::npos;
//   int counter = 0;

//   // Erase last watermarks:
//   if (s[s.length() - 1] == ' ') {
//     for (int i = s.length(); i >= 0; i--) {
//       if (s[i] == ' ' && s[i + 1] != ' ') {
//         last_c = i;
//       }
//     }
//     s.resize(s.length() - last_c);
//   }

//   // Find watermark before last word:
//   first_c = s.rfind(' ');
//   std::string word = s.substr(first_c + 1, s.length() - first_c);

//   // Calculate last word length:
//   for (int i = 0; i < word.length(); i++) {
//     counter++;
//   }

//   return counter;
// }

// Tutaj na następny dzień ze świeżą głową:

int lengthOfLastWord(std::string s) {
  int counter = 0;
  int i = s.length() - 1;

  while (i >= 0 && s[i] == ' ') {
    i--;
  }

  while (i >= 0 && s[i] != ' ') {
    counter++;
    i--;
  }

  return counter;
}

int main() {
  std::cout << lengthOfLastWord("Hello World") << "\n";
  std::cout << lengthOfLastWord("   fly me   to   the moon  ") << "\n";
  std::cout << lengthOfLastWord("luffy is still joyboy") << "\n";

  return 0;
}