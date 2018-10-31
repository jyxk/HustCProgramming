//
// Created by jyxk on 2017/12/27.
//

#include "LinkedList.h"

Position FindStu(int StuNum, StuInfoList L){
	Position P;

	P = L->next;
	while(P != NULL && P->StuNum != StuNum)
		P = P->next;

	return P;
}

StuInfoList newStu(int StuSum){
	Position head, tail;

	head = tail =(Position)malloc(sizeof(struct StuNode));
	//head->prev = NULL;
	tail->prev = NULL;
	for(int i = 0; i < StuSum; i++){

		tail->next = (Position)malloc(sizeof(struct StuNode));
		tail->next->prev = tail;
		tail = tail->next;
		printf("Input the student's Num:");
		scanf("%d", &tail->StuNum);
		printf("Input his/her name:");
		scanf("%s", tail->StuName);
		printf("Input the grade of 4 subject:\nEnglish Calculus Physics CPL\n");
		scanf("%d%d%d%d", &tail->English, &tail->Calculus, &tail->Physics, &tail->CPL);

	}

	tail->next = NULL;

	return head;
}

int IsEmpty(StuInfoList L){
	return L->next == NULL;
}

int IsLast(Position P, StuInfoList L){
	return P->next == NULL;
}

void TraversalOutput(StuInfoList L, Position Head) {
	Position prev = Head;
	while(!IsLast(prev, L)){
		prev = prev->next;
		PrintNode(prev);
	}
	prev->next = NULL;
}

void PrintNode(Position P){
	Position prev = P;
	printf("***********\n");
	printf("Name:%s\t", prev->StuName);
	printf("StuNum:%d\n", prev->StuNum);
	printf("English:%d\nCalculus:%d\nPhysics:%d\nCPL:%d\n", prev->English, prev->Calculus, prev->Physics, prev->CPL);
	printf("The Average:%.2lf\n", prev->Average);
	printf("***********\n");
}

void Change(Position P, int StuNum){
	Position prev = FindStu(StuNum, P);
	int option;
	printf("What do you want to change:\n");
	printf("1.English\t2.Calculus\n3.Physics\t4.CPL\n");
	scanf("%d", &option);
	switch(option){
		case 1:
			printf("please input a new mark:");
			scanf("%d", &prev->English);
			break;
		case 2:
			printf("please input a new mark:");
			scanf("%d", &prev->Calculus);
			break;
		case 3:
			printf("please input a new mark:");
			scanf("%d", &prev->Physics);
			break;
		case 4:
			printf("please input a new mark:");
			scanf("%d", &prev->CPL);
			break;
	}
}

void StuAverage(Position P, int StuSum){
	Position prev = P;
	for (int i = 0; i <= StuSum; ++i) {
		prev->Average = prev->CPL+prev->Physics+prev->Calculus+prev->English;
		prev->Average = prev->Average / 4;
		prev = prev->next;
	}
}

StuInfoList SelSort(StuInfoList L){
	StuInfoList p, q, small;
	double temp;
	int tempi;
	char *temps = malloc(sizeof(char)*20);

	for(p = L->next; p->next != NULL; p = p->next){
		small = p;
		for(q = p->next; q; q = q->next){
			if(q->Average > small->Average)
				small = q;

		}

		if(small != p){
			temp = p->Average;
			p->Average = small->Average;
			small->Average = temp;

			temp = p->StuNum;
			p->StuNum = small->StuNum;
			small->StuNum = temp;

			tempi = p->English;
			p->English = small->English;
			small->English = tempi;

			tempi = p->Calculus;
			p->Calculus = small->Calculus;
			small->Calculus = tempi;

			tempi = p->Physics;
			p->Physics = small->Physics;
			small->Physics = tempi;

			temp = p->CPL;
			p->CPL = small->CPL;
			small->CPL = temp;

			strcpy(temps, p->StuName);
			strcpy(p->StuName, small->StuName);
			strcpy(small->StuName, temps);

		}
	}

	return L;
}

StuInfoList PtrSort(Position L){
	Position p, q;
	Position temp;
	Position small;

	for(p = L->next; p->next != NULL; p = small->next) {
		small = temp = p;
		for (q = p->next; q; q = q->next) {
			if (q->Average > small->Average)
				small = q;
		}
		if (small != p) {
			swap(small, p);
		}
	}
	return L;
}

Position FindPre(Position head, Position target){
	Position p = head;
	while(p->next != NULL && p->next != target)
		p = p->next;

	return p;
}

void Delete(StuInfoList L, Position target){
	Position p, temp;

	p = FindPre(L, target);

	if(!IsLast(p, L)){
		temp = p->next;
		p->next = temp->next;
	}
}

void swap(Position p, Position t){
	Position temp;
	if(t->next==NULL) //t结点是否为尾结点
	{
		if(p->next==t) //p,t结点是否相邻
		{
			//与尾结点相邻的交换代
			t->next=p;
			t->prev=p->prev;
			p->next=NULL;
			p->prev->next=t;
			p->prev=t;
		}
		else
		{
			//与尾结点不相邻的交换代
			t->next=p->next;
			t->prev->next=p;
			temp=t->prev;
			t->prev=p->prev;
			p->next->prev=t;
			p->next=NULL;
			p->prev->next=t;
			p->prev=temp;
		}
	}
	else
	{
		if(p->next==t) //p,t结点是否相邻
		{
			//相邻的交换代
			t->next->prev=p;
			temp=t->next;
			t->next=p;
			t->prev=p->prev;
			p->next=temp;
			p->prev->next=t;
			p->prev=t;
		}
		else
		{
			//不相邻的交换代
			t->next->prev=p;
			temp=t->next;
			t->next=p->next;
			p->next->prev=t;
			p->next=temp;
			t->prev->next=p;
			temp=t->prev;
			t->prev=p->prev;
			p->prev->next=t;
			p->prev=temp;
		}
	}
}