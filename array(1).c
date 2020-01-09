#include<stdio.h>
#include<conio.h>
void main()
{

    int a[]={10,20,30,30,40};
    printf("%d",sizeof(a));
    int len=sizeof(a)/sizeof(a[0]);
    printf("%d",len);
    for(int i=0;i<len;i++)
    {
        printf("%d",a[i]);

    }
    getch();
}


