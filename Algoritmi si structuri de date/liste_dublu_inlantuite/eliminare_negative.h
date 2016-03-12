#ifndef ELIMINARE_NEGATIVE_H
#define ELIMINARE_NEGATIVE_H
#include "eliminare.h"
struct lista *eliminare_negative(struct lista *l)
{
	int negativ;
	struct lista *p,*q;
	for(p=l;p;)
	{
		negativ=p->k;
		if(negativ<0)
		{
			q=p->next;
			printf("\nSe sterge numarul negativ %i",negativ);
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