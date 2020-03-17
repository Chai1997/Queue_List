#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

typedef struct QNode
{
	int data;
	struct QNode* pNext;
}QNode, *pQNode;

typedef struct Queue
{
	pQNode pfront;
	pQNode prear;
}Queue;

void Init(Queue* Q);
void ENQueue(Queue* Q, int val);
void OUTQueue(Queue* Q);
void Destroy(Queue* Q);
void Print(Queue* Q);
int Get_Front(Queue* Q);