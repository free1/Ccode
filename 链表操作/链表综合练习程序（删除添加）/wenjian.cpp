#include<stdio.h>
#include<string.h>
#include<malloc.h>

struct student
{
 long number;
 char name[8];
 float score;
 struct student *next;
}*head=NULL;
int sum=0;  //计数

void main()
{
	void show();
	void insert();
	void del();
	char command[6];
	printf("        ***********************************************************\n");
	printf("                             链表综合练习程序\n");
	printf("        ***********************************************************\n");
	while(1)
	{ 
		printf("请输入操作命令,(输入help查看帮助):\n");
		scanf("%s",command);
		if(strcmp(command,"exit")==0) break; //输入exit结束循环
		else if(strcmp(command,"insert")==0) insert();
		else if(strcmp(command,"show")==0) show();
		else if(strcmp(command,"insert")==0) insert();
		else if(strcmp(command,"del")==0) del();
		else if(strcmp(command,"help")==0)
		{ 
			printf("命令名\t\t\t命令说明\n\n");
			printf("help  \t\t\t查看帮助\n");
			printf("show  \t\t\t显示内容\n");
			printf("insert\t\t\t插入内容\n");
			printf("del   \t\t\t删除信息\n");
			printf("exit  \t\t\t退出程序\n\n");
		}
		else printf("命令无效,请重新输入.(输入help查看帮助)\n");
	}
	printf("Bye\n");
}
void show()
{
	if(head==NULL)printf("没有任何记录\n\n");
	else
	{
		struct student *i;
		printf("学号\t姓名\t分数\n");
		for(i=head;i!=NULL;i=i->next)
			printf("%ld\t%s\t%.2f\n",i->number,i->name,i->score);
		printf("共有%d条学生记录\n\n",sum);
	}
}
void insert()
{
	printf("请按以下格式依次软每项,各项用空格分开\n");
	printf("学号\t姓名\t分数\n");
	struct student *i,*p,*j;
	p=(struct student *)malloc(sizeof(struct student));
	scanf("%ld%s%f",&p->number,p->name,&p->score);
	if(head==NULL){head=p;head->next=NULL;}     //链表为空
	else
	{
		for(i=head;i->next!=NULL && p->number>i->number;j=i,i=i->next);
		if(p->number<=i->number)
		{ 
			if(i==head)head=p;                  //插到最前面
			else j->next=p;      //插到中间
			p->next=i;
		}
		else
		{ 
			p->next=NULL;
			i->next=p;
		}
	}
	sum++;
	printf("操作成功\n\n");
}
void del()
{
	if(head==NULL)printf("错误:尚未输入任何记录\n");     //链表为空时
	else
	{
		long number;
		struct student *i,*j;
		printf("请输入要删除的学生的学号:");
		scanf("%ld",&number);
		for(i=head;i->next!=NULL && i->number!=number;j=i,i=i->next);
		if(i->number==number)
		{
			if(i==head)head=i->next;
			else j->next=i->next;
			sum--;
			free(i);
			printf("删除成功\n\n");
		}
		else printf("未找到输入的学号,请核对后输入\n");
	}
} 