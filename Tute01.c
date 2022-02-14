/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1, s2;
   printf("Enter Subject 1:");
   scanf("%d",&s1);
   
   printf("Enter Subject 2: ");
   scanf("%d", &s2);
   
   printf("Average mark = %1.f", ( (s1+s2)/2.0));
   
  
  return 0;
}

