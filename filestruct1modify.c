//program to implement file using structure and function

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void listRecords();
int count=0;
 struct emp
  {
    char name[20];
    int age;
    float bs;
  };
  struct emp e;
  char amo='y';
  int recsize=sizeof(e);
  FILE *fp;
  main()
  {
    fp=fopen("struct.txt","r");
    if(fp==NULL)
    {
      printf("Error in opening file");
      return 0;
    }
     listRecords();
  }
  void listRecords()
  {
    printf("----");
    while(fread(&e,recsize,1,fp)==1)
    {
      printf("\n\t%s %d %f",e.name,e.age,e.bs);
      printf("----");
    }
    printf("\nDo you want to modify?(y/n)");
    amo=getch();
    if(amo=='y')
    {
       char nam[20];
       //int count=0;
       printf("\nEnter the name to modify:");
       scanf("\n%s",nam);
       fp=fopen("struct.txt","r+");
       if(fp==NULL)
       {
         printf("Error in openning");
         return 0;
       }
       while(fread(&e,recsize,1,fp)==1)
       {
         if(strcmp(e.name,nam)==0)
         {
             count++;
           printf("\nEnter the new name:");
           scanf("\n%s",e.name);
           printf("\nenter the age:");
           scanf("\n%d",&e.age);
           printf("\nEnter the basic salary:");
           scanf("\n%f",&e.bs);
           fseek(fp,-recsize,SEEK_CUR);
           fwrite(&e,recsize,1,fp);
           break;
         }
         fflush(stdin);
       }
    }
    if(count==0)
    {
        printf("\nRecord not Found");
    }
    else
    {
        printf("\nRecord Found");
    }
   fclose(fp);
 }
