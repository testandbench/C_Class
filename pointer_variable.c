#include<stdio.h>
int main()
{
int i=10;
printf("\n Value of i=%d",i);
printf("\n Value of i=%u",&i);
printf("\n Value of i=%d",*(&i));
int *j;
j=&i;
printf("\n");
printf("\n Value of j=%u",j);
printf("\n Value of j=%u",&j);
printf("\n Value of j=%d",*(&j));
printf("\n");

//pointer variable which can store adress of pointervariable
int **k;
k=&j;
printf("\n Value of k=%u",k);
printf("\n Value of k=%u",&k);
printf("\n Value of k=%d",*(&k));
printf("\n");



printf("\n");
printf("\n %u,%u,%u,%u,k,&k,*k,*&k");
printf("\n");
printf("\n %d,%d,%d,%d,%d,%d",i,*&i,*j,**&j,**k,***&k);
return 0;
}
