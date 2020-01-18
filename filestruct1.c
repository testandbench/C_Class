//program to implement file using structure

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main()
{
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
  fp=fopen("struct.txt","r");
  if(fp==NULL)
  {
    printf("Error in opening file");
    return 0;
  }
  printf("----");
  while(fread(&e,recsize,1,fp)==1)
  {
      printf("\n\t%s %d %f",e.name,e.age,e.bs);
      printf("----");
  }
  fclose(fp);
}
