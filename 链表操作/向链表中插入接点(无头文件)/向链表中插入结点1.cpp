#include<stdio.h>
#include<malloc.h>
#include<io.h>
#include<stdlib.h>
struct student
{
	int num;
	struct student*next;
};
struct student*insertnode(struct student*head,char x,int i)
{
	int j=0;
	struct student *p,*s;
	p=head;
	while(p&&j<i-1)
	{
		p=p->next;
		++j;
	}
	if(!p||j>i-1)
	exit(1);
	s=(struct student*)malloc(sizeof(struct student));
	s->num=x;
	p->next=s;
}
void main()
{
	int n,i,x;
	struct student *q;
	printf("..");
	scanf("%d",&n);
	q=creat(n);
	i=2;
	x=123;
	insertnode(q,x,i);
	printf("zzz");
	while(q)
	{
		printf("%d",q->num);
		q=q->next;
	}
}