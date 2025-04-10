#include <cmath>
#include <iostream>
#include <string>

std::string addBinary(std::string a, std::string b) {
  std::string result = "";
  int carry = 0; // Przeniesienie
  int i = a.length() - 1, j = b.length() - 1;

  // Iterujemy od końca obu stringów
  while (i >= 0 || j >= 0 || carry) {
    int sum = carry; // Dodajemy przeniesienie
    if (i >= 0)
      sum += a[i--] - '0'; // Dodajemy bit z `a`
    if (j >= 0)
      sum += b[j--] - '0';                          // Dodajemy bit z `b`
    result.insert(result.begin(), (sum % 2) + '0'); // Dodajemy wynik do stringa
    carry = sum / 2; // Aktualizujemy przeniesienie
  }

  return result;
}

int main() {
  std::cout << addBinary("11", "1") << std::endl;      // Output: "100"
  std::cout << addBinary("1010", "1011") << std::endl; // Output: "10101"
  return 0;
}