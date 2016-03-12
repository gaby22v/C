#ifndef CONSTRUIRE_H
#define CONSTRUIRE_H
typedef struct lista
{
	int k;
	struct lista *next;
}*LIST;
typedef struct coada
{
	LIST front,rear;
}*QUEUE;
void newq(QUEUE q)
{
	q->front=q->rear=NULL;
}
#endif