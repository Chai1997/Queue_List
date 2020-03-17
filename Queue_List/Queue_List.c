#include"Queue_List.h"

void Init(Queue* Q)
{
	Q->pfront = (pQNode)malloc(sizeof(QNode));
	if (NULL == Q->pfront)
	{
		printf("创建空间失败\n");
	}
	else
	{
		Q->prear = Q->pfront;
		Q->prear->pNext = NULL;
	}
}
void ENQueue(Queue* Q, int val)
{
	pQNode pNew = (pQNode)malloc(sizeof(QNode));
	if (NULL == pNew)
	{
		printf("创建空间失败\n");
	}
	else
	{
		pNew->data = val;
		Q->prear->pNext = pNew;
		Q->prear = Q->prear->pNext;
		Q->prear->pNext = NULL;
	}
}
void OUTQueue(Queue* Q)
{
	if (Q->pfront == Q->prear)
	{
		printf("队列为空\n");
	}
	else
	{
		pQNode p = Q->pfront;
		Q->pfront = Q->pfront->pNext;
		free(p);
	}
}
void Destroy(Queue* Q)
{
	while (NULL != Q->pfront)
	{
 		Q->prear = Q->pfront->pNext;
		free(Q->pfront);
		Q->pfront = Q->prear;
	}
}
void Print(Queue* Q)
{
	if (Q->pfront == Q->prear)
	{
		printf("队列为空\n");
	}
	else
	{
		pQNode p = Q->pfront;
		while (p != Q->prear)
		{
			printf("%d ", p->pNext->data);
			p = p->pNext;
		}
		printf("\n");
	}
}

int Get_Front(Queue* Q)
{
	if (Q->pfront == Q->prear)
	{
		printf("队列为空\n");
	}
	return Q->pfront->pNext->data;
}