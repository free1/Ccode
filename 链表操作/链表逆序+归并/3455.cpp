#include <stdio.h>
#include <stdlib.h>

typedef struct node
{

       int data;

       struct node *next;

}Lnode , *Linklist;

Linklist La,Lb,Lc;

void read(Linklist &L,int n)  //读入链表元素函数

{

       Lnode *p,*s;

       p = (Linklist)malloc(sizeof(Lnode));

       p->data = n;

       s = L;

       while(s->next)

       {

              s = s->next;

       }

       p->next = s->next;

       s->next = p;

}

 

void inverse(Linklist &L)       //链表置逆函数

{

       Lnode *p,*q;

       p = L->next;

       q = L->next;

       q = q->next;

       p->next = NULL;

       p = q;

       while(p)

       {

              q = q->next;

              p->next = L->next;

              L->next = p;

              p = q;

       }

}

 

void output(Linklist &L)    //输出链表函数

{

       Lnode *p;

       p = L->next;

       while(p)

       {

              printf("%d ",p->data);

              p = p->next;

       }

       printf("\n");

}

 

void merge(Linklist &La,Linklist &Lb,Linklist &Lc)   //归并函数，以La的头结点作为Lc的头结点

{

       Lnode *pa,*pb,*pc;

       pa = La->next;

       pb = Lb->next;

       Lc = pc = La; 

       while(pa && pb)

       {

              if( pa->data <= pb->data )

              {

                     pc->next = pa;

                     pc = pa;

                     pa = pa->next;

              }

              else

              {

                     pc->next = pb;

                     pc = pb;

                     pb = pb->next;

              }

       }

       pc->next = pa ? pa : pb;

       free(Lb);

       Lb = NULL;

}

 

int main()

{

       int i,na,nb,n;

       La = (Linklist)malloc(sizeof(Lnode));

       La->next = NULL;

       Lb = (Linklist)malloc(sizeof(Lnode));

       Lb->next = NULL;

       Lc = (Linklist)malloc(sizeof(Lnode));

       printf("请输入A、B链表中的元素个数:\n");

       scanf("%d%d",&na,&nb);

 

       printf("请以非递增顺序输入A链表中的元素:\n");

       for( i = 0; i < na; i++ )    //以非递增顺序读入A链表中的元素

       {

              scanf("%d",&n);

              read(La,n);

       }

 

       printf("请以非递增顺序输入B链表中的元素:\n");

       for( i = 0; i < nb; i++ )    //以非递增顺序读入B链表中的元素

       {

              scanf("%d",&n);

              read(Lb,n);

       }

 

 

       inverse(La);         //将A链表置逆并输出

       printf("输出A链表置逆后的元素:\n");

       output(La); 

       inverse(Lb);         //将B链表置逆并输出

       printf("输出B链表置逆后的元素:\n");

       output(Lb);

       merge(La,Lb,Lc);      //归并A、B链表，得到的链表按非递减排列

       printf("输出归并之后的链表元素，非递减顺序:\n");

       output(Lc);            //输出归并完的链表元素

 

       return 0;

}

