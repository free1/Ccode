#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE *head,*p,*q;
NODE *search(NODE *head)
{   
	NODE *p;
	int i,j=0;
	p=head;
	printf("�����ѯλ��\n");
	scanf("%d",&i);
	while(j<i&&p->next!=NULL)
		{
			p=p->next;
			j++;
		}
	if(j==i)
		{
			printf("����ҵ�λ����%d  ������%d\n",i,p->data);
			return 0;
		}
	else
		return NULL;
}
int main()
{
	NODE *head,*p,*q;
	int x,cycle=1;
	head=(NODE*)malloc(sizeof(NODE));
	head->next=NULL;
	p=head;
	while(cycle)
	{
		printf("����һЩ������0����\n");
		scanf("%d",&x);
		if(x!=0)
		{
			q=(NODE*)malloc(sizeof(NODE));
			q->data=x;
			q->next=p->next;
			p->next=q;
			p=q;
		}
		else
		{ 
			cycle=0;
			p->next=NULL;
			p=head->next;
		}
	}
	printf("����������ǣ�");
	while(p)
	{
		 printf("%3d",p->data);
		 p=p->next;
	}
   printf("\n");
   search(head);
   return 0;
}