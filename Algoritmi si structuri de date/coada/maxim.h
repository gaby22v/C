#define MAXIM_H
void maxim(QUEUE q)
{
	LIST p;
	int max=-MAXINT;
	if(!empty(q))
	{
		for(p=q->front;p;p=p->next)
			if(p->k>max)
				max=p->k;
			printf("\nMax=%i",max);
	}
	else
		printf("\nVID");
}
#endif