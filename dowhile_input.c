#include<stdio.h>
void main()
{

    int n;
    do
    {

        printf("Enter number(0 to exit program)");
        scanf("%d",&n);
        printf("You entered %d\n",n);
    }
    while(n!=0);
}
