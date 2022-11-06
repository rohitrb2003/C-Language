// C program to explain the use
// of continue statement
#include <stdio.h> 
int main() { 

 for (int i = 1; i <= 10; i++) {
 // If i is equals to 6,
 // continue to next iteration
 // without printing
 if (i == 2)
 continue;
 else
 // otherwise print the value of i
 printf("%d ", i);
 }
 return 0;
} 