#define REVERSE
QUEUE reverse(QUEUE q)
{
	LIST p,s,f;
	p=NULL;
	while(q->front)
	{
		s=q->front->next;
		q->front->next=p;
		p=q->front;
		q->front=s;
	}
	for(f=p;f->next;f=f->next)
		q->rear=f;
	q->front=p;
	return q;
}
#endif