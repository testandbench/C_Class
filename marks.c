#include<stdio.h>
int main()
{

    float a,b,c,d,d1;
    printf("enter the mark for first subject");
    scanf("%f",&a);
    printf("enter the mark for second subject");
    scanf("%f",&b);
    printf("enter the mark for third subject");
    scanf("%f",&c);
    d=a+b+c;
    d1=d/3;
    if(d1>=70 && d1<=100);
    {
        printf("A Grade");
    }
    else if(d1>50 && d1<70)
    {
        printf("pass");
    }
    else if(d1>100)
        printf("the average of marks exceeds 100");
    else
    {
        printf("Fail");
    }
return 0;
}
