#include<stdio.h>
#include<malloc.h>
#define NULL 0
#define M 20
struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
};
typedef struct node NODE;
NODE *insert(NODE *tree,int x);
void midorder(NODE *tree);
void perorder(NODE *tree);
//void postorder(NODE *tree);
void main()
{
   NODE *root;                        
   int i,a;
   root=NULL;
   for(i=0;i<5;i++)
   {
	   printf("创建结点，输入0结束：");
	   scanf("%d",&a);
	   root=insert(root,a);
	   
   }                   
   printf("中序遍历：");
   midorder(root);
   printf("\n");
   printf("先序遍历：");                                                                                                                    
   perorder(root);
   printf("\n");
  // printf("后序遍历：");
  // postorder(root);
}
   NODE *insert(NODE *tree,int x)
{

	   NODE *n,*p;
	   int flag=0;
	   n=(NODE*)malloc(sizeof(NODE));
	   n->data=x;
	   n->lchild=n->rchild=NULL;
	   if(tree==NULL)
	   {
		   tree=n;
	       return tree;
	   }
	   p=tree;
	   while(flag==0)
	   {
		   if(p->data>x)
		   {
			   if(p->lchild)
				   p=p->lchild;                                                 
			   else
			   {
				   p->lchild=n;
				   flag=1;
			   }
		   }
		   else 
			   if(p->rchild!=NULL)
			   p=p->rchild;
		   else
		   {
			   p->rchild=n;
               flag=1;
		   }
	   }
        return tree;
}

void midorder(NODE *tree)
{
	NODE *p;
	NODE *stack[M];
	int top=0;
	p=tree;
	while(p||top>0)
	{
		while(p)
		{
			stack[top]=p;
			top++;
			p=p->lchild;
		}
        if(top>0)
		{
		top--;
		p=stack[top];
		printf("%3d",p->data);
		p=p->rchild;
		}
	}


} 

void perorder(NODE *tree)
{
	NODE *p;
	NODE *stack[M];
	int top=0;
	p=tree;
	while(p||top>0)
	{
		while(p)
		{
			printf("%3d",p->data);
			stack[top]=p;
			top++;
			p=p->lchild;
		}
		if(top>0)
		{
			top--;
			p=stack[top];
			p=p->rchild;
		}  
	}
}     

/*void postorder(NODE *tree)
{
	NODE *p;
	NODE *stack[M];
	int top=0;
	p=tree;
	while(p||top>0)
	{
	  	while(p)
		{
		stack[top]=p;
		top++;
		p=p->lchild;
		}
		printf("%3d",p->data);
        if(top>0)
		{
		top--;
		p=stack[top];
		p=p->rchild;
	}}
} */