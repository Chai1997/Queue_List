#include"Queue_List.h"

int main()
{
	Queue Q;
	Init(&Q);
	OUTQueue(&Q);
	ENQueue(&Q, 1);
	ENQueue(&Q, 2);
	ENQueue(&Q, 7);
	printf("%d\n", Get_Front(&Q));
	Print(&Q);
	OUTQueue(&Q);
	Print(&Q);
	Destroy(&Q);
	Print(&Q);
	return 0;
}