#define CONCATENARE_H
QUEUE concatenare(QUEUE q1,QUEUE q2)
{
	q1->rear->next=q2->front;
	return q1;
}
#endif