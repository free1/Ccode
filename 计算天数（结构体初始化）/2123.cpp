 #include <stdio.h>

struct date {
    int year;
    int month;
    int day1[12];
    int day2;
    int sum;
}date1 = { 0, 0, {31,28,31,30,31,30,31,31,30,31,30,31}, 0, 0} ;

void main()
{
     int i;
	printf("请输入年份：");
     scanf("%d", &date1.year);
     printf("请输入月份：");
     scanf("%d", &date1.month);
     printf("请输入日期：");
     scanf("%d", &date1.day2);
     
     for(i = 0; i < date1.month-1; i++){
         date1.sum += date1.day1[i];      
     }
     
 
if( (date1.year%4 == 0 && date1.year%100 != 0 || date1.year%400 == 0) && date1.month > 2 ){
         date1.sum += date1.day2+1;
     }else{
         date1.sum += date1.day2;
     }
     
     printf("%d年%d月%d日是一年中的第%d天 \n", date1.year, date1.month, date1.day2, date1.sum); 
}
