#ifndef ELIMINARE_POZITIVE_H
#define ELIMINARE_POZITIVE_H
#include "eliminare.h"
struct lista *eliminare_pozitive(struct lista *l)
{
	int pozitiv;
	struct lista *p,*q;
	for(p=l;p;)
	{
		pozitiv=p->k;
		if(pozitiv>0)
		{
			q=p->next;
			printf("\nSe sterge numarul pozitiv %i",pozitiv);
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