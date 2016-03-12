#ifndef REVERSE_H
#define REVERSE_H
struct lista *reverse(struct lista *l)
{
	struct lista *p,*s;
	p=NULL;
	while(l)
	{
		s=l->next;
		l->next=p;
		p=l;
		l=s;
	}
	return p;
}
#endif