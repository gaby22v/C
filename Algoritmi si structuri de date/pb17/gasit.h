#ifndef GASIT_H
#define GASIT_H
int gasit(struct lista *l,int x)
{
	struct lista *p;
	for(p=l;p;p=p->next)
		if(x==p->k)
			return 1;
		return 0;
}
#endif