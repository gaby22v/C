#ifndef ELIMINARE_PARE_H
#define ELIMINARE_PARE_H
#include "eliminare.h"
struct lista *eliminare_pare(struct lista *l)
{
	int par;
	struct lista *p,*q;
	for(p=l;p;)
	{
		par=p->k;
		if(par%2==0)
		{
			q=p->next;
			printf("\nSe sterge numarul par %i",par);
			l=eliminare(l,p->k);
			printf("\nLista ramane:");
			afisare(l);
			p=q;
		}
			else
				p=p->next;
	}
	return l;
}
#endif