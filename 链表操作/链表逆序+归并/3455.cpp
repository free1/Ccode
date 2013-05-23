#include <stdio.h>
#include <stdlib.h>

typedef struct node
{

       int data;

       struct node *next;

}Lnode , *Linklist;

Linklist La,Lb,Lc;

void read(Linklist &L,int n)  //��������Ԫ�غ���

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

 

void inverse(Linklist &L)       //�������溯��

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

 

void output(Linklist &L)    //���������

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

 

void merge(Linklist &La,Linklist &Lb,Linklist &Lc)   //�鲢��������La��ͷ�����ΪLc��ͷ���

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

       printf("������A��B�����е�Ԫ�ظ���:\n");

       scanf("%d%d",&na,&nb);

 

       printf("���Էǵ���˳������A�����е�Ԫ��:\n");

       for( i = 0; i < na; i++ )    //�Էǵ���˳�����A�����е�Ԫ��

       {

              scanf("%d",&n);

              read(La,n);

       }

 

       printf("���Էǵ���˳������B�����е�Ԫ��:\n");

       for( i = 0; i < nb; i++ )    //�Էǵ���˳�����B�����е�Ԫ��

       {

              scanf("%d",&n);

              read(Lb,n);

       }

 

 

       inverse(La);         //��A�������沢���

       printf("���A����������Ԫ��:\n");

       output(La); 

       inverse(Lb);         //��B�������沢���

       printf("���B����������Ԫ��:\n");

       output(Lb);

       merge(La,Lb,Lc);      //�鲢A��B�����õ��������ǵݼ�����

       printf("����鲢֮�������Ԫ�أ��ǵݼ�˳��:\n");

       output(Lc);            //����鲢�������Ԫ��

 

       return 0;

}

