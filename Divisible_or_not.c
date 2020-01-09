#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(a%7==0)
    {
        printf("divisible by 7");
    }
    else
    {
        printf("not divisible by 7");
    }
return 0;
}
