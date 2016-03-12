#ifndef INSERARE_INTERIOR_H
#define INSERARE_INTERIOR_H
struct lista *inserare_interior(struct lista *l,int x,int poz)
{
	struct lista *aux,*p,*q;
	int i=1;
	aux=(struct lista*)malloc(sizeof(struct lista));
	aux->k=x;
	if(poz>1)
	{
		for(p=l;p&&i<poz-1;p=p->next)
			i++;
		q=p->next;
		aux->next=q;
		p->next=aux;
	}
	else
	{
		aux->next=l;
		l=aux;
	}
	return l;
}
#endif