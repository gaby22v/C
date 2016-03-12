#ifndef INSERARE_SFARSIT_H
#define INSERARE_SFARSIT_H
#include "construire.h"
struct lista *inserare_sfarsit(struct lista *l,int k)
{
	struct lista *aux,*capat;
	aux=adaugare(k,NULL);
	if((l=NULL)||(k<=l->k))
	{
		aux->next=l;
		return aux;
	}
	else
	{
		capat=l;
		while((l->next)&&(l->next->k<k))
			l=l->next;
		aux->next=l->next;
		l->next=aux;
		return capat;
	}
}
#endif