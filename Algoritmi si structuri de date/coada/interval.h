#ifndef INTERVAL_H
#define INTERVAL_H
void interval(QUEUE q)
{
	int a,b,aux;
	LIST p;
	printf("\nIntervalul [a,b]:\n");scanf("%i",&a);scanf("%i",&b);
	if(b<0)
	{
		aux=a;
		a=b;
		b=aux;
	}
	for(p=q->front;p;p=p->next)
	if((p->k>=a)&&(p->k<=b))
		printf("%i",p->k);
	printf("NULL\n");
}
#endif