#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
struct node 
{
  	int id;
	long int number;
	char name[10];
	struct node *next;
};
typedef struct node NODE;

void CREAT(NODE *head) //�������������ǵ��õģ�q ������ָ�룬������������ġ���
{
	int back;
	NODE *p,*q;
	q=head;
	p=(NODE*)malloc(sizeof(NODE));
	printf("������ϵ�˵ı�ţ�\n");
	scanf("%d",&p->id);
	printf("������ϵ�˵�������\n");
	scanf("%s",&p->name); 
	printf("������ϵ�˵ĺ��룺\n");
	scanf("%d",&p->number);
    while(q->next!=NULL)
	{
      q=q->next;
	}
	  if((p->id)==(q->id))
	 {
      printf("�˱�ŵ���ϵ���Ѵ���!\n");
	  printf("\n���� 0 �������˵���\n");
	  scanf("%d",&back);
	  system("cls");//��������
	 }
	  else
	  {
       q->next=p;
       p->next=NULL;
       printf("������ϵ�˵ı����:%d ������:%s ������:%d\n",p->id,p->name,p->number);
	   printf("\n���� 0 �������˵���\n");
	   scanf("%d",&back);
	   system("cls");//��������
	  }
} 

NODE *CHECK1(NODE *head)//��һ�ְ��ձ�Ų�ѯ,������ǵ��õģ�
{
	int i;
	int choice3;
	int back;
	NODE *p;
	p=head;
	printf("������ϵ�˵ı�ţ�\n");
	scanf("%d",&i);
	while(p->id<i&&p->next!=NULL)
	{
		p=p->next;
	}
	if(i==p->id)
	{   
	  	printf("��ϵ�˵ı����: %d ������: %s  ������: %d\n",p->id,p->name,p->number);
		printf("ѡ����ϵ�˲�����1.�޸�   2.ɾ��   3.����\n");
        scanf("%d",&choice3);
	    if(choice3==1)
		{
		    int ID;
			long int NUMBER;
			char NAME[10];
			printf("������ϵ�˱�ţ�\n");
		    scanf("%d",&ID);
			p->id=ID;
			printf("������ϵ��������\n");
			scanf("%s",&NAME);
			strcpy(p->name,NAME);
			printf("������ϵ�˺��룺\n");
            scanf("%d",&NUMBER);
	        p->number=NUMBER;
			printf("�޸ĳɹ���\n");
			printf("��ϵ�˵ı����:%d ������:%s  ������:%d\n",p->id,p->name,p->number);
			printf("\n���� 0 �������˵���\n");
			scanf("%d",&back);
			system("cls");			
		}
		else if(choice3==2)//ɾ������ʵ��֮�������޷���������
		{ 
			NODE *q;
            q=head;
		    int	j=0;
			while(q->next&&j<i-1)
			{
             q=q->next;
             j++;
			}
	        if(j==i-1)
			{
             p=q->next;
             q->next=p->next;
             free(p);//�ͷ��ڴ�ռ�
			 printf("ɾ���ɹ���\n");
			 printf("\n���� 0 �������˵���\n");
			 scanf("%d",&back);
			 system("cls");			
			}
		}
		else if(choice3==3)
			system("cls");
	}
	else
	{
		printf("���޴��ˡ�\n");
	    printf("���� 0 �������˵���\n");
		scanf("%d",&back);
		system("cls");
	}	
  return head; 	

}

 NODE *CHECK2(NODE *head)
 {
	NODE *p;
	int choice3,back;
	char NAME[10];
	p=head;
	printf("������ϵ�˵�������\n");
    scanf("%s",&NAME);
	while(p->next&&strcmp(p->name,NAME)!=0)
	{
		p=p->next;
	}
	    if(strcmp(p->name,NAME)==0)
		{
		   printf("��ϵ�˵ı����:%d ������:%s ������:%d\n",p->id,p->name,p->number);
		   printf("ѡ����ϵ�˲�����1.�޸�   2.ɾ��   3.����\n");
           scanf("%d",&choice3);
	     if(choice3==1)
		 {
		    int ID;
			char NAME[10];
			long int NUMBER;
			printf("������ϵ�˱�ţ�\n");
		    scanf("%d",&ID);
			p->id=ID;
			printf("������ϵ��������\n");
		    scanf("%s",&NAME);
			strcpy(p->name,NAME);
			printf("������ϵ�˺��룺\n");
            scanf("%d",&NUMBER);
	        p->number=NUMBER;
			printf("�޸ĳɹ���\n");
			printf("��ϵ�˵ı����:%d   ������:%s  ������:%d\n",p->id,p->name,p->number);
			printf("\n���� 0  �������˵���\n");
			scanf("%d",&back);
			system("cls");
		 }
		else if(choice3==2)//�����޷�����
		{ 
			NODE *q;
            q=head;
		    int	j=0;
			while(q->next&&j>(p->id))
			{
             q=q->next;
			}
	        if(j==(p->id)-1)
			{
             p=q->next;
             q->next=p->next;
             free(p);//�ͷ��ڴ�ռ�
			 printf("ɾ���ɹ���\n");
			 printf("\n���� 0 �������˵���\n");
			 scanf("%d",&back);
			 system("cls");	
			}
		}
		else if(choice3==3)
	        system("cls");   
	}	
	 else
		{
		 printf("���޴��ˡ�\n");
		 printf("���� 0 �������˵���\n");
		 scanf("%d",&back);
		 system("cls");
		}	
	
	return head;
}

void LIST(NODE *head)//��ʾ������ϵ��
{
	NODE *p;
	int back;
	p=head;
	while(p->next)
	{
		p=p->next;
		printf("��ϵ�˵ı����:%d ������:%s ������:%d\n",p->id,p->name,p->number);
	}
		printf("\n���� 0 �������˵���\n");
		scanf("%d",&back);
		system("cls");
}

int main()
{
	int choice1,choice2;
	NODE *head;
	int i;
	head=(NODE*)malloc(sizeof(NODE));
	head->next=NULL;
	system("color 2e");//������ɫ�趨
	printf("\n\n\n\n\t\t\t\t���ڽ���ϵͳ�����Ժ�.....\n\t\t");
    for(i=0;i<25;i++)
	{
     Sleep(150);
     printf(">>");
	}
     Sleep(1500);
     system("cls");

	while(1)
	{
	            printf("                           ****�� ӭ ʹ �� ͨ Ѷ ¼****              \n");
				printf("\n                               1.�� �� �� ϵ ��                    \n");
                printf("\n                               2.�� �� �� ϵ ��                    \n");
	            printf("\n                               3.�� ϵ �� �� ��                    \n");
	            printf("\n                               0.�� �� ͨ Ѷ ¼                    \n");
			    printf("\n                            -----------------------                \n");
                printf("ѡ�� ");                
				scanf("%d",&choice1);
	switch(choice1)
	{
	case 1:
		printf("ѡ���ѯ��ʽ��1.���    2.����\n");
		scanf("%d",&choice2);
		switch(choice2)
		{    
		case 1:CHECK1(head);break;
		case 2:CHECK2(head);break;
		}break;
	case 2:CREAT(head);break;
	case 3:LIST(head);break;
	case 0:printf("���ݱ��棬ллʹ�á�\n");return 0;
	}
	}
return 0;
}


