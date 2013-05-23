#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int red[6],blue[1];
    int temp;
    int i,j;
    int flag;
    srand(time(NULL));
    printf("Ä£ÄâË«É«Çò¿ª½±ºÅÂë:\n");

                       

   for(i=0;i<6;i++)
  {
  Lab:red[i]=rand()%33+1; 
  for(j=0;j<i;j++){
  if(red[i]==red[j])
   goto Lab;                
  }
  }
    
    
   for(i=0;i<6;i++){
   for(j=0;j<6-1;j++){
        
        
       if(red[j]>red[j+1]){
        temp=red[j];
        red[j]=red[j+1];
        red[j+1]=temp; 
        
     }   
    
    }

  }   
   

  printf("ºìÉ«ÇòºÅÂë:",red[i]);

  for(i=0;i<6;i++)
  {
   printf("%d\t",red[i]);   
           
  }  

  printf("\n");
  //À¶É«Çò
  
  blue[i]=rand()%16+1;
  printf("À¶É«ÇòºÅÂë:%d",blue[i]);
  printf("\n");
  
   
  system("pause");
}

