#ifndef SUMA_PARE_H
#define SUMA_PARE_H
int suma_pare(struct lista *l)
{
	int s=0;
	struct lista *p;
	for(p=l;p;p=p->next)
	if(p->k%2==0)
		s+=p->k;
	return s;
}
#endif