#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,len,flag=1;
    char a[20];
    printf("Enter String");
    scanf("%s",a);
    for(len=0;a[len]!='\0';len++);
     printf("%d \n",len);
    for(i=0,j=len-1;i<len/2;++i,--j)
    {
        if(a[j]!=a[i])
        {
            flag=0;
        }
    }
if(flag==1)
{
    printf("Palindrome");
}
else
{
    printf("Not Palindrome");
}
}

