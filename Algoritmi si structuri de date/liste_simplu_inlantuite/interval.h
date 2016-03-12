#ifndef INTERVAL_H
#define INTERVAL_H
void interval(struct lista *l)
{
	int a,b,aux;
	struct lista *p;
	printf("\nIntervalul [a,b]:\n");scanf("%i",&a);scanf("%i",&b);
	if(b<0)
	{
		aux=a;
		a=b;
		b=aux;
	}
	for(p=l;p;p=p->next)
	if((p->k>=a)&&(p->k<=b))
		printf("%i",p->k);
	printf("NULL\n");
}
#endif