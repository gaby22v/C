#ifndef SUMA_POZITIVE_H
#define SUMA_POZITIVE_H
int suma_pozitive(struct lista *l)
{
	int s=0;
	struct lista *p;
	for(p=l;p;p=p->next)
		if(p->k>0)
			s+=p->k;
		return s;
}
#endif
