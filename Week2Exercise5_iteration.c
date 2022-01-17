#include <stdio.h>

/*
 * Complete the fibonacci function below such that it calculates the 
 * nth term of the Fibonacci sequence using iteration.
 * 
 * The first 4 terms of the Fibonacci sequence in this example 
 * are  1, 1, 2, 3
 *
 * For example if we call fibonacci(1) we should get the value 1 returned,
 * if we call fibonacci(4) we should get the value 3 returned. 
 */

int fibonacci(int term){
  int prev = 0;
  int curr = 1;
  int next;
  int count = 2;

  for (int count = 2; count <= term; count += 1) {
    next = curr + prev;
    prev = curr;
    curr = next;
  }
  return curr;
}

int main(void) {
  printf("%d", fibonacci(4));
  return 0;
}
