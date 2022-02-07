/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int subject1, subject2, total = 0;
  float average = 0;

  printf("Enter Subject 1 Marks : ");
  scanf("%d", &subject1);
  printf("Enter Subject 2 Marks : ");
  scanf("%d", &subject2);

  total = subject1 + subject2;
  average = total / 2;

  printf("\nThe Average : %.2f", average);

  return 0;
}

