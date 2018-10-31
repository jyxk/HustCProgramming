#include <stdio.h>
#include <stdlib.h>

struct s_list{
	int data;               /* 数据域 */
	struct s_list *next;    /* 指针域 */
} ;

void create_list_v1(struct s_list **headp,int *p);
void create_list_v2(struct s_list **headp,int *p);

int main(void){
	struct s_list *head=NULL,*p;
	int s[]={1,2,3,4,5,6,7,8,0};    /* 0为结束标记 */

	create_list_v2(&head,s);            /* 创建新链表 头指针地址传递给内部函数的指针*/
	p=head;                         /*遍历指针p指向链头 */
	while(p){
		printf("%d|",p->data);     /* 输出数据域的值 */
		p=p->next;                  /*遍历指针p指向下一结点 */
	}
	printf("\n");

	return 0;
}
void create_list_v1(struct s_list **headp,int *p){//此处纠错，双重指针，指向main函数中指针head
	struct s_list * loc_head=NULL,*tail;

	if(p[0]==0)                     /* 相当于*p==0 */
		;
	else{                          /* loc_head指向动态分配的第一个结点 */
		loc_head=(struct s_list *)malloc(sizeof(struct s_list));
		loc_head->data=*p++;        /* 对数据域赋值 */
		tail=loc_head;              /* tail指向第一个结点 */

		while(*p){                  /* tail所指结点的指针域指向动态创建的结点 */
			tail->next=(struct s_list *)malloc(sizeof(struct s_list));
			tail=tail->next;        /* tail指向新创建的结点 */
			tail->data=*p++;        /* 向新创建的结点的数据域赋值 */
		}
		tail->next=NULL;            /* 对指针域赋NULL值 */
	}
	*headp=loc_head;                 /* 使头指针headp指向新创建的链表 */
}

void create_list_v2(struct s_list **headp,int *p){//后进先出表，即栈
	struct s_list * loc_head=NULL,*tail;

	if(p[0]==0)                     /* 相当于*p==0 */
		;
	else{                          /* tail指向动态分配的第一个结点 */
		loc_head=(struct s_list *)malloc(sizeof(struct s_list));
		loc_head->data=*p++;        /* 对数据域赋值 */
		loc_head->next=NULL;
		tail=loc_head;              /* loc_head指向第一个结点 */

		while(*p){
			tail=(struct s_list *)malloc(sizeof(struct s_list));
			tail->next=loc_head;
			loc_head=tail;
			tail->data=*p++;
		}
		//tail->next=NULL;
	}
	*headp=loc_head;
}
