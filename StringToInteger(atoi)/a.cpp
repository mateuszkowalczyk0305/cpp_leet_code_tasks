#include <climits>
#include <iostream>
#include <string>

int myAtoi(std::string s) {
  int i = 0;
  int n = s.size();

  // 1. Pomijamy spacje
  while (i < n && s[i] == ' ') {
    i++;
  }

  // 2. Obsługa znaku
  int sign = 1;
  if (i < n && (s[i] == '-' || s[i] == '+')) {
    sign = (s[i] == '-') ? -1 : 1;
    i++;
  }

  // 3. Wczytujemy cyfry
  long result = 0; // używamy long, aby wykryć overflow
  while (i < n && std::isdigit(s[i])) {
    result = result * 10 + (s[i] - '0');

    // 4. Obsługa przepełnienia
    if (sign == 1 && result > INT_MAX)
      return INT_MAX;
    if (sign == -1 && -result < INT_MIN)
      return INT_MIN;

    i++;
  }

  return static_cast<int>(sign * result);
}

int main() {
  std::cout << myAtoi("42") << "\n";            // 42
  std::cout << myAtoi("-042") << "\n";          // -42
  std::cout << myAtoi("1337c0d3") << "\n";      // 1337
  std::cout << myAtoi("0 - 1") << "\n";         // 0
  std::cout << myAtoi("words and 987") << "\n"; // 0
  std::cout << myAtoi("-91283472332") << "\n";  // INT_MIN
  return 0;
}
