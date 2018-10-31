//
// Created by Think on 2017/12/27.
//

#ifndef INC_7_4_LINKEDLIST_H
#define INC_7_4_LINKEDLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StuNode{             //定义成绩单中链表结点
	struct StuNode *prev;
	int StuNum;
	char StuName[20];
	int Calculus;
	int English;
	int Physics;
	int CPL;
	double Average;
	struct StuNode *next;
};

typedef struct StuNode *PtrToNode;//类型定义指向结点的指针
typedef PtrToNode StuInfoList;//用于列表
typedef PtrToNode Position;//用于位置指示

Position FindStu(int StuNum, StuInfoList L);//寻找特定学生函数原型
StuInfoList newStu(int StuSum);//添加新学生
Position FindPre(Position head, Position target);//寻找前一个结点
int IsEmpty(StuInfoList L);
int IsLast(Position P, StuInfoList L);
void TraversalOutput(StuInfoList L, Position Head);
void PrintNode(Position P);
void Change(Position P, int StuNum);
void StuAverage(Position P, int StuSum);
void Delete(StuInfoList L, Position target);
void swap(Position p, Position t);
StuInfoList SelSort(StuInfoList L);
StuInfoList PtrSort(StuInfoList L);

#endif //INC_7_4_LINKEDLIST_H
