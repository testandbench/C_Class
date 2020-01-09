#include<stdlib.h>
#include<stdio.h>
int main()
{
    printf("the loop produces output as:\n");
    for(int i=1;i<=10;i++)
    {
        if((i%3)==0)
        {
            break;
        }
        else{
            printf("%d",i);
        }
    }
}
