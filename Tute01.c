/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2;
  float avg;

  printf("enter 1st mark: ");
  scanf("%d", &m1);

  printf("enter 2nd mark: ");
  scanf("%d", &m2);

  avg = (m1 +m2)/ 2;
  printf("the average mark is %.2f", avg);
  
  return 0;
}

