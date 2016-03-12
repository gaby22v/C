#ifndef ELIMINARE_NULE_H
#define ELIMINARE_NULE_H
#include "eliminare.h"
struct lista *eliminare_nule(struct lista *l)
{
	int nule;
	struct lista *p,*q;
	for(p=l;p;)
	{
		nule=p->k;
		if(nule==0)
		{
			q=p->next;
			printf("\nSe sterg elementele nule %i",nule);
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