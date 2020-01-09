#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a,n,num[40];
    printf("how many values do you want to enter");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;++i)
     scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;++j)
        {
            if(num[i]>num[j])
            {
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    printf("the numbers in ASCENDING\n");
    for(i=0;i<n;++i)
    {
        printf("%d",num[i]);
    }
}
