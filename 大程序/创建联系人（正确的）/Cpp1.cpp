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

void CREAT(NODE *head) //建立了链表但是是倒置的，q 是搜索指针，在主函数定义的。。
{
	int back;
	NODE *p,*q;
	q=head;
	p=(NODE*)malloc(sizeof(NODE));
	printf("输入联系人的编号：\n");
	scanf("%d",&p->id);
	printf("输入联系人的姓名：\n");
	scanf("%s",&p->name); 
	printf("输入联系人的号码：\n");
	scanf("%d",&p->number);
    while(q->next!=NULL)
	{
      q=q->next;
	}
	  if((p->id)==(q->id))
	 {
      printf("此编号的联系人已存在!\n");
	  printf("\n输入 0 返回主菜单。\n");
	  scanf("%d",&back);
	  system("cls");//清屏函数
	 }
	  else
	  {
       q->next=p;
       p->next=NULL;
       printf("新增联系人的编号是:%d 姓名是:%s 号码是:%d\n",p->id,p->name,p->number);
	   printf("\n输入 0 返回主菜单。\n");
	   scanf("%d",&back);
	   system("cls");//清屏函数
	  }
} 

NODE *CHECK1(NODE *head)//第一种按照编号查询,输出还是倒置的！
{
	int i;
	int choice3;
	int back;
	NODE *p;
	p=head;
	printf("输入联系人的编号：\n");
	scanf("%d",&i);
	while(p->id<i&&p->next!=NULL)
	{
		p=p->next;
	}
	if(i==p->id)
	{   
	  	printf("联系人的编号是: %d 姓名是: %s  号码是: %d\n",p->id,p->name,p->number);
		printf("选择联系人操作：1.修改   2.删除   3.返回\n");
        scanf("%d",&choice3);
	    if(choice3==1)
		{
		    int ID;
			long int NUMBER;
			char NAME[10];
			printf("输入联系人编号：\n");
		    scanf("%d",&ID);
			p->id=ID;
			printf("输入联系人姓名：\n");
			scanf("%s",&NAME);
			strcpy(p->name,NAME);
			printf("输入联系人号码：\n");
            scanf("%d",&NUMBER);
	        p->number=NUMBER;
			printf("修改成功！\n");
			printf("联系人的编号是:%d 姓名是:%s  号码是:%d\n",p->id,p->name,p->number);
			printf("\n输入 0 返回主菜单。\n");
			scanf("%d",&back);
			system("cls");			
		}
		else if(choice3==2)//删除功能实现之后链表无法重新连上
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
             free(p);//释放内存空间
			 printf("删除成功！\n");
			 printf("\n输入 0 返回主菜单。\n");
			 scanf("%d",&back);
			 system("cls");			
			}
		}
		else if(choice3==3)
			system("cls");
	}
	else
	{
		printf("查无此人。\n");
	    printf("输入 0 返回主菜单。\n");
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
	printf("输入联系人的姓名：\n");
    scanf("%s",&NAME);
	while(p->next&&strcmp(p->name,NAME)!=0)
	{
		p=p->next;
	}
	    if(strcmp(p->name,NAME)==0)
		{
		   printf("联系人的编号是:%d 姓名是:%s 号码是:%d\n",p->id,p->name,p->number);
		   printf("选择联系人操作：1.修改   2.删除   3.返回\n");
           scanf("%d",&choice3);
	     if(choice3==1)
		 {
		    int ID;
			char NAME[10];
			long int NUMBER;
			printf("输入联系人编号：\n");
		    scanf("%d",&ID);
			p->id=ID;
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
		 }
		else if(choice3==2)//还是无法连上
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
             free(p);//释放内存空间
			 printf("删除成功！\n");
			 printf("\n输入 0 返回主菜单。\n");
			 scanf("%d",&back);
			 system("cls");	
			}
		}
		else if(choice3==3)
	        system("cls");   
	}	
	 else
		{
		 printf("查无此人。\n");
		 printf("输入 0 返回主菜单。\n");
		 scanf("%d",&back);
		 system("cls");
		}	
	
	return head;
}

void LIST(NODE *head)//显示所有联系人
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
}

int main()
{
	int choice1,choice2;
	NODE *head;
	int i;
	head=(NODE*)malloc(sizeof(NODE));
	head->next=NULL;
	system("color 2e");//背景颜色设定
	printf("\n\n\n\n\t\t\t\t正在进入系统，请稍后.....\n\t\t");
    for(i=0;i<25;i++)
	{
     Sleep(150);
     printf(">>");
	}
     Sleep(1500);
     system("cls");

	while(1)
	{
	            printf("                           ****欢 迎 使 用 通 讯 录****              \n");
				printf("\n                               1.查 看 联 系 人                    \n");
                printf("\n                               2.创 建 联 系 人                    \n");
	            printf("\n                               3.联 系 人 列 表                    \n");
	            printf("\n                               0.退 出 通 讯 录                    \n");
			    printf("\n                            -----------------------                \n");
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
	case 0:printf("数据保存，谢谢使用。\n");return 0;
	}
	}
return 0;
}


