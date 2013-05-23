#include<stdio.h>
 int main()
 {
     char c;
     while (scanf("%c",&c)!=EOF)
     {
         if((c>='d'&&c<='z')||(c>='D'&&c<='Z'))
         {
             c=c-3;    
         }
         else if((c>='a'&&c<='c')||(c>='A'&&c<='C'))
         {
                 c=c+23;
         }
         printf("%c",c);
     }
     printf("\n");
     return 0;
 }
 
