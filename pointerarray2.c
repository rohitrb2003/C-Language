#include<stdio.h>
int main()
{
    int i,j;
    int Test [2][2]={{10,15,21,24},{16,18,26,27}};
    int *p =&Test[0]; // int *p=Test;
    for (i=0;i<=2; i++)
    {
        for(j=0;j<=1; j++)
        {
        printf("The marks obtained stuedents are[%d]%d\n",j,*p);
        p++; 
        }  
    }
    return 0;
}