#include <stdio.h>
// You are climbing a staircase.It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps.In how many distinct ways can you
// climb to the top
//

//     Example 1
//     :
//     Input : n = 2 Output : 2 Explanation
//     : There are two ways to climb to the top.
//                  1. 1 step + 1 step
//                  2. 2 steps Example 2 :
//     Example 2:
//     Input : n = 3 Output : 3 Explanation
//     : There are three ways to climb to the top.1. 1 step +
//                 1 step + 1 step
//                 2. 1 step + 2 steps
//                 3. 2 steps + 1 step

int climbStairs(int n) {
  if (n <= 1)
    return 1;

  int prev = 1; // ways(0)
  int curr = 1; // ways(1)
  for (int i = 2; i <= n; ++i) {
    int next = prev + curr; // ways(i)=ways(i-1)+ways(i-2)
    prev = curr;
    curr = next;
  }
  return curr; // ways(n)
}

int main() {
  int result = climbStairs(2);
  int result2 = climbStairs(3);

  printf("%d \n", result);
  printf("%d \n", result2);
}
