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

int CREAT(NODE *head) //����������q ������ָ�룬������������ġ���
{
	int back;
	NODE *p,*q;
	q=head;
	p=(NODE*)malloc(sizeof(NODE));
	printf("������ϵ�˵ı�ţ�\n");
	scanf("%d",&p->id);
	while(q->next)
	{
     q=q->next; 
	 if((p->id)==(q->id))
	 {
      printf("�˱�ŵ���ϵ���Ѵ���!\n");
	  printf("\n���� 0 �������˵���\n");
	  scanf("%d",&back);
	  system("cls");//��������
	  return 0;
	 } 
	}
	   printf("������ϵ�˵�������\n");
	   scanf("%s",&p->name); 
       printf("������ϵ�˵ĺ��룺\n");
       scanf("%d",&p->number); 
       q->next=p;
       p->next=NULL;
       printf("������ϵ�˵ı����:%d ������:%s ������:%d\n",p->id,p->name,p->number);
	   printf("\n���� 0 �������˵���\n");
	   scanf("%d",&back);
	   system("cls");//��������
	   return 0;
} 

NODE *CHECK1(NODE *head)//��һ�ְ��ձ�Ų�ѯ
{
	int i;
	int choice3;
	int back;
	NODE *p,*q;
	p=head;
	q=head;
	printf("������ϵ�˵ı�ţ�\n");
	scanf("%d",&i);
	while(p->next)
	{
	p=p->next;
	if(i==p->id)
	{   
	  	printf("��ϵ�˵ı����: %d ������: %s  ������: %d\n",p->id,p->name,p->number);
		printf("ѡ����ϵ�˲�����1.�޸�   2.ɾ��   3.����\n");
        scanf("%d",&choice3);
		if(choice3==1)
		{
			long int NUMBER;
			char NAME[10];
			printf("������ϵ�˵�������\n");
			scanf("%s",&NAME);
			strcpy(p->name,NAME);
			printf("������ϵ�˺��룺\n");
            scanf("%d",&NUMBER);
	        p->number=NUMBER;
			printf("�޸ĳɹ���\n");
			printf("��ϵ�˵ı���ǣ�%d �����ǣ�%s  �����ǣ� %d\n",p->id,p->name,p->number);
			printf("���� 0 �������˵���\n");
			scanf("%d",&back);
			system("cls");
			return head;
		}
		else if(choice3==2)
		{
			while(q->next)
			{
            q=q->next;
	        if(q->next==p)
			{
             q->next=p->next;
			 p->next=NULL;
             free(p);//�ͷ��ڴ�ռ�
			 printf("ɾ���ɹ���\n");
			 printf("\n���� 0 �������˵���\n");
			 scanf("%d",&back);
			 system("cls");
			 return head;
			}
			 else if(p==q)
			 {
               head->next=NULL;
			   free(p);
			   printf("ɾ���ɹ���\n");
			   printf("\n���� 0 �������˵���\n");
			   scanf("%d",&back);
			   system("cls");
			 return head;
			 }
			
			else 
				continue;
			}
		}
		else if(choice3==3)
		{
			system("cls");
		    return head;
		}
	}
     else if(p->id!=i)
	 {
		 continue;
	 }
	}
     printf("���޴��ˣ�\n");
	 printf("���� 0 �������˵���\n");
	 scanf("%d",&back);
	 system("cls");
	 return head;
}

 NODE *CHECK2(NODE *head)
 {
	NODE *p;
	NODE *q;
	int choice3,back;
	char NAME[10];
	p=head;
	q=head;
	printf("������ϵ�˵�������\n");
    scanf("%s",&NAME);
	while(p->next)
	{
		p=p->next;
	    if(strcmp(p->name,NAME)==0)
		{
		   printf("��ϵ�˵ı����:%d ������:%s ������:%d\n",p->id,p->name,p->number);
		   printf("ѡ����ϵ�˲�����1.�޸�   2.ɾ��   3.����\n");
           scanf("%d",&choice3);
	     if(choice3==1)
		 {
			char NAME[10];
			long int NUMBER;
			printf("������ϵ�˱�ţ�\n");
		    scanf("%d",&p->id);
			while(q->next)
			{
            q=q->next;
			if(p->id==q->id)
            {
            printf("�α����ϵ���Ѵ���!\n");
			printf("���� 0 �������˵���\n");
			scanf("%d",&back);
			system("cls");
            return head;
			}
			}
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
			return head;
		 }
		else if(choice3==2)
		{ 
			NODE *q;
            q=head;
			while(q->next)
			{
            q=q->next;
	        if(q->next==p)
			{
             q->next=p->next;
             free(p);//�ͷ��ڴ�ռ�
			 printf("ɾ���ɹ���\n");
			 printf("\n���� 0 �������˵���\n");
			 scanf("%d",&back);
			 system("cls");
			 return head;
			}
			else if(q==p)
			{           
               head->next=NULL;
			   free(p);
			   printf("ɾ���ɹ���\n");
			   printf("\n���� 0 �������˵���\n");
			   scanf("%d",&back);
			   system("cls");
			 return head;
			}
			}
		}
		else if(choice3==3)
		{
			system("cls");  
		    return head;
		}
	}
	 else
	 {	
		 continue;
	 }
	}
		 printf("���޴��ˡ�\n");
		 printf("���� 0 �������˵���\n");
		 scanf("%d",&back);
		 system("cls");		
	     return head;
}

NODE *LIST(NODE *head)//��ʾ������ϵ��
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
		return head;
}

NODE *SORTING(NODE *head)
{
	int i,back;
	NODE *first,*tail,*p_min,*min,*p;
	first = NULL;
	while (head != NULL) 
	{
		for (p=head,min=head; p->next!=NULL; p=p->next) 
		{		   
			if (p->next->id< min->id) 
			{
				p_min = p; 
				min = p->next; 
			}
		} 
		if (first == NULL)
		{
			first = min; 
			tail = min; 
		}
		else 
		{
			tail->next = min; 
			tail = min; 
		}  
		if (min == head) 
		{
			head = head->next; 
		}
		else 
		{
			p_min->next = min->next; 
		}  
	}
		if (first != NULL) 
		{
			tail->next = NULL; 
		}
	head = first;
	for(i=0;i<25;i++)
	{
     Sleep(150);
     printf(">>");
	}
     Sleep(1500);
	 printf("\n������ɡ�\n");
	 printf("���� 0 �������˵���\n");
	 scanf("%d",&back);
	 system("cls");
    return head;
}


int store(NODE *head)
{
     FILE *f;
	 NODE *p;
	 p=head;
	 f=fopen("D:\\account.dat","w+");
	 while(p->next)
	 {
		 p=p->next;
		 fprintf(f,"%d %s %d\n",p->id,p->name,p->number);
	 }
     fclose(f);
     return 0;
} 
NODE *read(NODE *head)     
{
	FILE *f;
	NODE *p,*q;
	q=head;
    if((f=fopen("D:\\account.dat","r"))==NULL)
	return head;
    while(!feof(f))
	{
	p=(NODE*)malloc(sizeof(NODE));
	fscanf(f,"%d%s%d\n",&p->id,&p->name,&p->number);
	q->next=p;
    p->next=NULL;
	q=q->next;
	}
	return head;
} 
int main()
{
	int choice1,choice2;
	NODE *head;
	int i;
	head=(NODE*)malloc(sizeof(NODE));
	head->next=NULL;
	system("color 3e");//������ɫ�趨
	printf("\n\n\n\n\t\t\t\t���ڽ���ϵͳ�����Ժ�.....\n\t\t");
    for(i=0;i<25;i++)
	{
     Sleep(150);
     printf(">>");
	}
     Sleep(1500);
	 read(head);
     system("cls");
	while(1)
	{
	            printf("                           ****�� ӭ ʹ �� ͨ Ѷ ¼****                \n");
				printf("\n\n                               1.�� �� �� ϵ ��                    \n");
                printf("\n\n                               2.�� �� �� ϵ ��                    \n");
	            printf("\n\n                               3.�� ϵ �� �� ��                    \n");
				printf("\n\n                               4.�� �� �� �� ��                    \n");
	            printf("\n\n                               0.�� �� ͨ Ѷ ¼                    \n");
			    printf("\n\n                            -----------------------                \n");
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
    case 4:SORTING(head);break;  
	case 0:printf("���ݱ��棬ллʹ�á�\n");store(head);return 0;
	}
	}
return 0;
}


