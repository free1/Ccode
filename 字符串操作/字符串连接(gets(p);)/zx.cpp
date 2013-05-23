#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
  char *p=(char *)malloc(21);
  char *p1=(char *)malloc(21);
  char *p2=(char *)malloc(21);
  int i,j;
  
  
  printf("请输入一个字符串");
  gets(p);
  
  printf("请输入二个字符串");
  gets(p1);
  
  for(i = 0; i < strlen(p)+strlen(p1); i++)
  {
      if(i < strlen(p))
	  {
          *(p2+i)= *(p+i);
          printf("i = %d, ", i);
      }
	  else
	  {
          *(p2+i)= *(p1+i-strlen(p));
      }                             
                                     
  
  }  
  *(p2+i) = '\0';
   puts(p2);   
   free(p2);
     
    system("pause");
}