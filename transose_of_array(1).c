#include<stdio.h>
#include<conio.h>
void main()
{
int a1[2][3],i,j;
int a2[3][2];
printf("enter num");
for(i=0;i<2;++i)
{
    for(j=0;j<3;++j)
    {
        scanf("%d",&a1[i][j]);
    }
}
for(i=0;i<2;++i)
{
    for(j=0;j<3;++j)
    {
        a2[j][i]=a1[i][j];
    }
}
for(i=0;i<3;++i)
{
    for(j=0;j<2;++j)
    {
        printf("%d",a2[i][j]);
    }
    printf("\n");
}
}
