#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
for(i=0;i<5;i++)
{
    printf("Enter the values\n");
    scanf("%d",&a[i]);
}
printf("priority values");
for(i=0;i<5;i++)
{

    printf("%d\n",a[i]);
}
}
