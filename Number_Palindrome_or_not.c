#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("enter number");
scanf("\n%d",&n);
temp=n;
while(n>0)
{
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
}
if(temp==sum)
{
    printf("Number is Palindrome");
}
else
{
    printf("Not Palindrome");
}
return 0;
}
