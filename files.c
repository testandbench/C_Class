#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int  main()
{
    FILE *fp;
    struct amp
    {
     char name[20];
     int age;
     float fb;
    };
    struct amp e;
    char ano='y';
    int resize=sizeof(e);
    fp=fopen("F:\\keltron_ust\\C\\18-01-2020\\employee.txt","a");
    if(fp==NULL)
    {
        printf("Error in Opening File");
    }
    while(ano=='y'||ano=='Y')
    {
        printf("Enter name");
        scanf("\n%s",e.name);
        printf("Enter age");
        scanf("\n%s",&e.age);
        printf("Enter salary");
        scanf("\n%s",&e.fb);
        fwrite(&e,resize,1,fp);
        printf("\nAdd another record?(y/n)");
        fflush(stdin);
        scanf("%c",&ano);
    }
    printf("added");
    fclose(fp);
    return 0;
ad=fread("F:\\keltron_ust\\C\\18-01-2020\\employee.txt","r");
}

