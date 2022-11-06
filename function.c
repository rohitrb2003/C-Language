#include<stdio.h>

int max(int num1 ,int num2 );
int main()
{
    int a = 100;
    int b = 200;
    int res;
    res = max(a,b);
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    


 return 0;
}
int max(int num1, int num2)
{
    int res;
    if(num1 > num2)
    res = num1;
    else
    res = num2;
    return  res;
}