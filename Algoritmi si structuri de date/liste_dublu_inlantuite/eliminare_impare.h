#ifndef ELIMINARE_IMPARE_H
#define ELIMINARE_IMPARE_H
#include "eliminare.h"
struct lista *eliminare_impare(struct lista *l)
{
	int impar;
	struct lista *p,*q;
	for(p=l;p;)
	{
		impar=p->k;
		if(impar%2!=0)
		{
			q=p->next;
			printf("\nSe sterge numarul impar %i",impar);
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