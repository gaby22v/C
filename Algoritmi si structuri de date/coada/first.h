#define FIRST_H
int frontq(QUEUE q)
{
	if(!empty(q))
		return q->front->k;
	else
	{
		printf("\nCoada este vida");
		return 0;
	}
}
#endif