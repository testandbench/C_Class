#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter age");
    scanf("%d",&a);
    printf("\nEnter Martial Status");
    scanf("%d",&b);
    printf("\nEnter Gender");
    scanf("%d",&c);
 if(b==0 && c==0 && a>=30)
 {
     printf("eligible");
 }
 else if(b==0 && c==1 && a>=25)
 {
     printf("eligible");
 }
 else if(b==1)
 {
     printf("Not married");
 }
 else if(b>1)
 {
     printf("Invalid martial status");
 }
 else if(c>1)
 {
     printf("Enter the right Gender");
 }
 else{
    printf("not insured");
 }
}
