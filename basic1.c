#include<stdio.h>
void main()
{

    printf("Welcome");
    int a,b,c,c1,c2,c3;
    printf("\n Enter the first number");
    scanf("%d",&a);
    printf("Enter the Second number");
    scanf("%d",&b);
    c=a+b;
    c1=a-b;
    c2=a*b;
    c3=a/b;
    printf("%d",c);
    printf("\n the diffrence is %d",c1);
    printf("\n the product is %d",c2);
    printf("\n the division is %d",c3);
    printf("\n a is %d,b is %d and c is %d",a,b,c);
}

