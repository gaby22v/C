#define ELIMINARE_H
#include "empty.h"
void remq(QUEUE q)
{
	LIST out;
	if(!empty(q))
	{
		out=q->front;
		if(q->front->next)
			q->front=q->front->next;
		else
			q->front=q->rear=NULL;
		free(out);
	}
	else
		printf("Coada era vida");
}
#endif