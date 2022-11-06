#include<stdio.h>
int main()
{
    int i;
    int Test [5]={10,15,21,24,25};
    int *p =&Test[0]; // int *p=Test;
    for (i=0;i<=4; i++)
    {
        printf("The marks obtained stuedents are %d\n",*p);
        p++; 
        
    }
    return 0;
}