#ifndef EMPTY_H
#define EMPTY_H
int empty(QUEUE q)
{
		if((q->front==q->rear)&&(q->front==NULL))
		return 1;
	else
		return 0;
}
#endif