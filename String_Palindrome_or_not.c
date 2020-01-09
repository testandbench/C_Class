#include<stdio.h>
#include<conio.h>
void main()
{
char pal[10];
int flag,i;
printf("Enter String\n");
scanf("%s",&pal);
printf("The String Entered is %s %d",&pal,strlen(pal));
int len=strlen(pal)-1;
for(i=0;i<strlen(pal);i++)
{
    if (pal[i]==pal[len-i])
    {
        flag=1;
    }
    else
    {
        flag=0;
        break;
    }}
    if (flag==1)
    {
        printf("\nPalindrome");
    }
    else
        printf("\nNot Palindrome");
}

