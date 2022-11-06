#include<stdio.h>
int main ()
{
    int z = 10;
    int * p = &z;
    
    printf("The Adress Of Variable Z Is %x\n",&z);
    printf("The Value Of Pointer variable p  is %x\n", &p);
    printf("The value Of z which is at P is %d",* p);
    return 0;
}