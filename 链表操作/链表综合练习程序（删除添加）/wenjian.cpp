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
int sum=0;  //����

void main()
{
	void show();
	void insert();
	void del();
	char command[6];
	printf("        ***********************************************************\n");
	printf("                             �����ۺ���ϰ����\n");
	printf("        ***********************************************************\n");
	while(1)
	{ 
		printf("�������������,(����help�鿴����):\n");
		scanf("%s",command);
		if(strcmp(command,"exit")==0) break; //����exit����ѭ��
		else if(strcmp(command,"insert")==0) insert();
		else if(strcmp(command,"show")==0) show();
		else if(strcmp(command,"insert")==0) insert();
		else if(strcmp(command,"del")==0) del();
		else if(strcmp(command,"help")==0)
		{ 
			printf("������\t\t\t����˵��\n\n");
			printf("help  \t\t\t�鿴����\n");
			printf("show  \t\t\t��ʾ����\n");
			printf("insert\t\t\t��������\n");
			printf("del   \t\t\tɾ����Ϣ\n");
			printf("exit  \t\t\t�˳�����\n\n");
		}
		else printf("������Ч,����������.(����help�鿴����)\n");
	}
	printf("Bye\n");
}
void show()
{
	if(head==NULL)printf("û���κμ�¼\n\n");
	else
	{
		struct student *i;
		printf("ѧ��\t����\t����\n");
		for(i=head;i!=NULL;i=i->next)
			printf("%ld\t%s\t%.2f\n",i->number,i->name,i->score);
		printf("����%d��ѧ����¼\n\n",sum);
	}
}
void insert()
{
	printf("�밴���¸�ʽ������ÿ��,�����ÿո�ֿ�\n");
	printf("ѧ��\t����\t����\n");
	struct student *i,*p,*j;
	p=(struct student *)malloc(sizeof(struct student));
	scanf("%ld%s%f",&p->number,p->name,&p->score);
	if(head==NULL){head=p;head->next=NULL;}     //����Ϊ��
	else
	{
		for(i=head;i->next!=NULL && p->number>i->number;j=i,i=i->next);
		if(p->number<=i->number)
		{ 
			if(i==head)head=p;                  //�嵽��ǰ��
			else j->next=p;      //�嵽�м�
			p->next=i;
		}
		else
		{ 
			p->next=NULL;
			i->next=p;
		}
	}
	sum++;
	printf("�����ɹ�\n\n");
}
void del()
{
	if(head==NULL)printf("����:��δ�����κμ�¼\n");     //����Ϊ��ʱ
	else
	{
		long number;
		struct student *i,*j;
		printf("������Ҫɾ����ѧ����ѧ��:");
		scanf("%ld",&number);
		for(i=head;i->next!=NULL && i->number!=number;j=i,i=i->next);
		if(i->number==number)
		{
			if(i==head)head=i->next;
			else j->next=i->next;
			sum--;
			free(i);
			printf("ɾ���ɹ�\n\n");
		}
		else printf("δ�ҵ������ѧ��,��˶Ժ�����\n");
	}
} 