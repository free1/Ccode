#include <stdio.h>
#define N 2

//班级结构体 
struct Classes
{
	int id;
	char name[20];
};

//学生结构体 
struct Student
{
	int id;
	char name[20];
	struct Classes cls;       
}students[N];

//成绩结构体
struct Score
{
	struct Student stu;
	float chinese;//语文
	float english;//英语
	float math;//数学    
	float sum;  
	float avg;       
}; 


/*函数声明*/
void inputScore(struct Score score[]);
void display(struct Score score[]);

void main()
{
	struct Score score[N];
	inputScore(score);
	display(score);
}


void inputScore(struct Score score[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
		score[i].sum=0.0;
        score[i].stu=students[i];

		printf("输入第%d学号:",i+1);
		scanf("%d",&score[i].stu.id);
     
		printf("输入第%d姓名:",i+1);
		scanf("%s",score[i].stu.name);

		printf("输入第%d班级:",i+1);
		scanf("%s",&score[i].stu.cls.name);

		printf("输入语文成绩",i+1);
		scanf("%f",&score[i].chinese); 
        
		printf("输入英语成绩",i+1);
		scanf("%f",&score[i].english);
     
		printf("输入数学成绩",i+1);
		scanf("%f",&score[i].math);  
		
		score[i].sum+=score[i].chinese + score[i].english + score[i].math;
        score[i].avg=score[i].sum/2;                    
    }  
}


void display(struct Score score[])
{
     int i;
     printf("|学号| |姓名| |班级|   |语文成绩| |英语成绩| |数学成绩| |总成绩|  |平均成绩|\n");
     for(i=0;i<N;i++)
    {
		printf("%03d\t",score[i].stu.id); 
		printf("%s\t",score[i].stu.name); 
		printf("%s\t",score[i].stu.cls.name);
		printf("%0.2f\t",score[i].chinese);
		printf("%0.2f\t",score[i].english);
		printf("%0.2f\t",score[i].math); 
		printf("总成绩%0.2f\t",score[i].sum);
		printf("平均成绩%0.2f\t\n",score[i].avg);
   }
     
}