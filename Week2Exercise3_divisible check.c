#include <stdio.h>
#include <stdbool.h>

/*
 * Write a function which returns true if a number is divisible by 3 and  
 * false if it is not.  Hint: use the modulo (%) operator.
 *
 * Modify your code so that your function now returns true if a number is divisible 
 * by 3 or 5 and false if it is not.
 *
*/

int n = 112;

int main(void) {
  if (n % 3 == 0 || n % 5 == 0){
    return printf("True\n");
  } else {
    return printf("False\n");
  }
}
