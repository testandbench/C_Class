//program to implement file using structure

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main()
{
  FILE *fp;
  struct emp
  {
    char name[20];
    int age;
    float bs;
  };
  struct emp e;
  char amo='y';
  int recsize=sizeof(e);
  fp=fopen("struct.txt","w");     // (for reading) fp=fopen("str.txt","r");
  if(fp==NULL)
  {
    printf("Error in opening file");
    return 0;
  }
  while(amo=='y' || amo=='Y')
  {
      printf("\nEnter the name:");
      scanf("\n%s",e.name);
      printf("Enter the age:");
      scanf("\n%d",&e.age);
      printf("Enter the basic salary:");
      scanf("\n%f",&e.bs);

      fwrite(&e,recsize,1,fp);
      printf("Add another record?(y/n)");
      fflush(stdin);
      amo=getch();
  }
  printf("Added");
  fclose(fp);
}
