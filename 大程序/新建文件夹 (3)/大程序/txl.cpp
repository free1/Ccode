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

int CREAT(NODE *head) //建立了链表，q 是搜索指针，在主函数定义的。。
{
	int back;
	NODE *p,*q;
	q=head;
	p=(NODE*)malloc(sizeof(NODE));
	printf("输入联系人的编号：\n");
	scanf("%d",&p->id);
	while(q->next)
	{
     q=q->next; 
	 if((p->id)==(q->id))
	 {
      printf("此编号的联系人已存在!\n");
	  printf("\n输入 0 返回主菜单。\n");
	  scanf("%d",&back);
	  system("cls");//清屏函数
	  return 0;
	 } 
	}
	   printf("输入联系人的姓名：\n");
	   scanf("%s",&p->name); 
       printf("输入联系人的号码：\n");
       scanf("%d",&p->number); 
       q->next=p;
       p->next=NULL;
       printf("新增联系人的编号是:%d 姓名是:%s 号码是:%d\n",p->id,p->name,p->number);
	   printf("\n输入 0 返回主菜单。\n");
	   scanf("%d",&back);
	   system("cls");//清屏函数
	   return 0;
} 

NODE *CHECK1(NODE *head)//第一种按照编号查询
{
	int i;
	int choice3;
	int back;
	NODE *p,*q;
	p=head;
	q=head;
	printf("输入联系人的编号：\n");
	scanf("%d",&i);
	while(p->next)
	{
	p=p->next;
	if(i==p->id)
	{   
	  	printf("联系人的编号是: %d 姓名是: %s  号码是: %d\n",p->id,p->name,p->number);
		printf("选择联系人操作：1.修改   2.删除   3.返回\n");
        scanf("%d",&choice3);
		if(choice3==1)
		{
			long int NUMBER;
			char NAME[10];
			printf("输入联系人的姓名：\n");
			scanf("%s",&NAME);
			strcpy(p->name,NAME);
			printf("输入联系人号码：\n");
            scanf("%d",&NUMBER);
	        p->number=NUMBER;
			printf("修改成功！\n");
			printf("联系人的编号是：%d 姓名是：%s  号码是： %d\n",p->id,p->name,p->number);
			printf("输入 0 返回主菜单。\n");
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
             free(p);//释放内存空间
			 printf("删除成功！\n");
			 printf("\n输入 0 返回主菜单。\n");
			 scanf("%d",&back);
			 system("cls");
			 return head;
			}
			 else if(p==q)
			 {
               head->next=NULL;
			   free(p);
			   printf("删除成功！\n");
			   printf("\n输入 0 返回主菜单。\n");
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
     printf("查无此人！\n");
	 printf("输入 0 返回主菜单。\n");
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
	printf("输入联系人的姓名：\n");
    scanf("%s",&NAME);
	while(p->next)
	{
		p=p->next;
	    if(strcmp(p->name,NAME)==0)
		{
		   printf("联系人的编号是:%d 姓名是:%s 号码是:%d\n",p->id,p->name,p->number);
		   printf("选择联系人操作：1.修改   2.删除   3.返回\n");
           scanf("%d",&choice3);
	     if(choice3==1)
		 {
			char NAME[10];
			long int NUMBER;
			printf("输入联系人编号：\n");
		    scanf("%d",&p->id);
			while(q->next)
			{
            q=q->next;
			if(p->id==q->id)
            {
            printf("次编号联系人已存在!\n");
			printf("输入 0 返回主菜单。\n");
			scanf("%d",&back);
			system("cls");
            return head;
			}
			}
			printf("输入联系人姓名：\n");
		    scanf("%s",&NAME);
			strcpy(p->name,NAME);
			printf("输入联系人号码：\n");
            scanf("%d",&NUMBER);
	        p->number=NUMBER;
			printf("修改成功！\n");
			printf("联系人的编号是:%d   姓名是:%s  号码是:%d\n",p->id,p->name,p->number);
			printf("\n输入 0  返回主菜单。\n");
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
             free(p);//释放内存空间
			 printf("删除成功！\n");
			 printf("\n输入 0 返回主菜单。\n");
			 scanf("%d",&back);
			 system("cls");
			 return head;
			}
			else if(q==p)
			{           
               head->next=NULL;
			   free(p);
			   printf("删除成功！\n");
			   printf("\n输入 0 返回主菜单。\n");
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
		 printf("查无此人。\n");
		 printf("输入 0 返回主菜单。\n");
		 scanf("%d",&back);
		 system("cls");		
	     return head;
}

NODE *LIST(NODE *head)//显示所有联系人
{
	NODE *p;
	int back;
	p=head;
	while(p->next)
	{
		p=p->next;
		printf("联系人的编号是:%d 姓名是:%s 号码是:%d\n",p->id,p->name,p->number);
	}
		printf("\n输入 0 返回主菜单。\n");
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
	 printf("\n整理完成。\n");
	 printf("输入 0 返回主菜单。\n");
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
	system("color 3e");//背景颜色设定
	printf("\n\n\n\n\t\t\t\t正在进入系统，请稍后.....\n\t\t");
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
	            printf("                           ****欢 迎 使 用 通 讯 录****                \n");
				printf("\n\n                               1.查 看 联 系 人                    \n");
                printf("\n\n                               2.创 建 联 系 人                    \n");
	            printf("\n\n                               3.联 系 人 列 表                    \n");
				printf("\n\n                               4.整 理 数 据 库                    \n");
	            printf("\n\n                               0.退 出 通 讯 录                    \n");
			    printf("\n\n                            -----------------------                \n");
                printf("选择： ");                
				scanf("%d",&choice1);
	switch(choice1)
	{
	case 1:
		printf("选择查询方式：1.编号    2.姓名\n");
		scanf("%d",&choice2);
		switch(choice2)
		{    
		case 1:CHECK1(head);break;
		case 2:CHECK2(head);break;
		}break;
	case 2:CREAT(head);break;
	case 3:LIST(head);break;
    case 4:SORTING(head);break;  
	case 0:printf("数据保存，谢谢使用。\n");store(head);return 0;
	}
	}
return 0;
}


