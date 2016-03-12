#ifndef ADAUGARE_H
#define ADAUGARE_H
#include "empty.h"
void addq(QUEUE q,int e)
{
	LIST aux;
	int f;
	if(empty(q))
		f=1;
	aux=(LIST)malloc(sizeof(LIST));
	aux->k=e;
	aux->next=NULL;
	if(f==1)
		q->front=q->rear=aux;
	else
	{
		q->rear->next=aux;
		q->rear=aux;
	}
}
#endif