#ifndef CONCATENARE_H
#define CONCATENARE_H
struct lista *concatenare(struct lista *l,struct lista *m)
{
	struct lista *p;
	for(p=l;p->next;p=p->next);
	p->next=m;
	return l;
}
#endif