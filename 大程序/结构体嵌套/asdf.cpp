#include <stdio.h>
#define N 2

//�༶�ṹ�� 
struct Classes
{
	int id;
	char name[20];
};

//ѧ���ṹ�� 
struct Student
{
	int id;
	char name[20];
	struct Classes cls;       
}students[N];

//�ɼ��ṹ��
struct Score
{
	struct Student stu;
	float chinese;//����
	float english;//Ӣ��
	float math;//��ѧ    
	float sum;  
	float avg;       
}; 


/*��������*/
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

		printf("�����%dѧ��:",i+1);
		scanf("%d",&score[i].stu.id);
     
		printf("�����%d����:",i+1);
		scanf("%s",score[i].stu.name);

		printf("�����%d�༶:",i+1);
		scanf("%s",&score[i].stu.cls.name);

		printf("�������ĳɼ�",i+1);
		scanf("%f",&score[i].chinese); 
        
		printf("����Ӣ��ɼ�",i+1);
		scanf("%f",&score[i].english);
     
		printf("������ѧ�ɼ�",i+1);
		scanf("%f",&score[i].math);  
		
		score[i].sum+=score[i].chinese + score[i].english + score[i].math;
        score[i].avg=score[i].sum/2;                    
    }  
}


void display(struct Score score[])
{
     int i;
     printf("|ѧ��| |����| |�༶|   |���ĳɼ�| |Ӣ��ɼ�| |��ѧ�ɼ�| |�ܳɼ�|  |ƽ���ɼ�|\n");
     for(i=0;i<N;i++)
    {
		printf("%03d\t",score[i].stu.id); 
		printf("%s\t",score[i].stu.name); 
		printf("%s\t",score[i].stu.cls.name);
		printf("%0.2f\t",score[i].chinese);
		printf("%0.2f\t",score[i].english);
		printf("%0.2f\t",score[i].math); 
		printf("�ܳɼ�%0.2f\t",score[i].sum);
		printf("ƽ���ɼ�%0.2f\t\n",score[i].avg);
   }
     
}