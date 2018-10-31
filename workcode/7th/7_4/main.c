#include "LinkedList.h"

int main(void){

	StuInfoList Class8Info = malloc(sizeof(StuInfoList));
	Position head = malloc(sizeof(Position));
	StuInfoList sortedList = malloc(sizeof(struct StuNode));

	int StuSum;
	int StuNum;

	printf("How many people in Class:");
	scanf("%d", &StuSum);

	head = newStu(StuSum);

	printf("Who's data need to be change? 0 to skip");
	scanf("%d", &StuNum);
	if(StuNum)
		Change(head, StuNum);

	StuAverage(head, StuSum);

	TraversalOutput(Class8Info, head);

	sortedList = PtrSort(head);
	TraversalOutput(Class8Info, sortedList);

	return 0;
}

