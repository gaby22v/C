#define SUMA_PARE_H
int suma_pare(QUEUE q)
{
	int s=0;
	LIST p;
	for(p=q->front;p;p=p->next)
		if(p->k%2==0)
			s+=p->k;
return s;
}
#endif