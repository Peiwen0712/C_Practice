#include <stdio.h>

/* 
 Modify the function below so that it prints out the square multiplication tables for any number.  How might you modify this function, or add a new function, so it prints out the multiplication tables for any range of numbers?

 */

void squareMultRow(int row, int size){

  for (int column = 1; column <= size; column++)  {
    printf("%d\t", row * column);
  }
  printf("\n");
}

void squareMultTable(int size){

  printf("The %d times table:\n", size);

  for (int row = 1; row <= size; row++)  {
    squareMultRow(row, size);
  }
}

void squareMultTables(int lower, int upper){
  for (int i = lower; i <= upper; i++){
    squareMultTable(i);
  }
}

int main(void) {
  squareMultTables(1, 10);
  return 0;
}
