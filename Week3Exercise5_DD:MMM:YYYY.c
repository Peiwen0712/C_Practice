#include <stdio.h>

/* 
 * Complete the function printDate below so that it prints out the data
 * in a struct Date in the format 
 * 
 * DD:MMM:YYYY - e.g. 01:JAN:2019
 */

struct Date
{
	int day;
	char month[4];
	int year;
};

void printDate(struct Date d){
  printf("%.2d:%c%c%c:%.4d", d.day, d.month[0], d.month[1], d.month[2],d.year);
}

int main(void) {
  struct Date date1;
  date1.day = 1;
  date1.month[0] = 'J';
  date1.month[1] = 'A';
  date1.month[2] = 'N';
  date1.month[3] = '\0';
  date1.year = 2019;
  printDate(date1);
  printf("\n");
  struct Date date2;
  date2.day = 2;
  date2.month[0] = 'F';
  date2.month[1] = 'E';
  date2.month[2] = 'B';
  date2.month[3] = '\2';
  date2.year = 2022;
  printDate(date2);
  return 0;
}
