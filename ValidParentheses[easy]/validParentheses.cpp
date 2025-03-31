#include <iostream>
// #include <vector>
#include <stack>

bool ismatching(char a, char b) {
  return ((a == '{' && b == '}') || (a == '(' && b == ')') ||
          a == '[' && b == ']');
}

bool isValid(std::string s) {
  std::stack<char> st;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
      st.push(s[i]);
    } else {
      if (st.empty())
        return false;
      if (ismatching(st.top(), s[i])) {
        st.pop();
      } else
        return false;
    }
  }
  if (st.empty())
    return true;
  else
    return false;
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