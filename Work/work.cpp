#include <iostream>
#include <stack>

void printStack(std::stack<int> a) {
  while (!a.empty()) {
    std::cout << a.top() << '\n';
    a.pop();
  }
}

int main() {
  std::stack<int> st;

  st.push(10);
  st.push(20);
  st.push(30);

  printStack(st);

  return 0;
}