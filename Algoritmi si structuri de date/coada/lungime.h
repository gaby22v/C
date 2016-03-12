#define LUNGIME_H
int lungime(QUEUE q)
{
	LIST p;
	int i=0;
	for(p=q->front;p;p=p->next)
		i++;
	return i;
}
#endif