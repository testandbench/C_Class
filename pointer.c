#include<stdio.h>
void main()
{
    int i=10;
    printf("\n Value of i=%d",i);
    printf("\n Value of i=%u",&i);
    printf("\n Value of i=%d",*(&i));
    printf("\n");
}
