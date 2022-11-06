#include <stdio.h> 
int main() { 
int i, j; 
int table = 2; 
int max = 5; 
printf("_________\n");
for (i = 1; i <= table; i++) { // outer loop 

 for (j = 0; j <= max; j++){ // inner loop 
 printf("%d x %d = %d\n", i, j, i*j); 
 printf("_________\n");
 } 
 printf("\n"); /* blank line between tables */ 
}}