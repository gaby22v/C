#ifndef INTERCLASARE_H
#define INTERCLASARE_H
#include "inserare_sfarsit.h"
struct lista *interclasare(struct lista *l1,struct lista *l2)
{
	struct lista *p=l1,*q=l2,*r=NULL;
	int k;
	while(p&&q)
	{
		if(p->next)
		{
			k=p->k;
		p=p->next;
		}
		else
		{
			k=q->k;
			q=q->next;
		}
		r=inserare_sfarsit(r,k);
		while(p)
		{
			r=inserare_sfarsit(r,p->k);
			p=p->next;
		}
		while(q)
			r=inserare_sfarsit(r,p->k);
		q=q->next;
	}
	return r;
}
#endif