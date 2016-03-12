#ifndef CONS_H_INCLUDED
#define CONS_H_INCLUDED
struct lista
	{int k;
	 struct lista *next,*prev;
	 };

struct lista *cons_ldi(int k,struct lista *l)
{ 	struct lista *aux,*p;
	aux=(struct lista *)malloc(sizeof(struct lista));
	aux->k=k;
	aux->next=l;
	aux->prev=NULL;
	l->prev=aux;
	if(l)
	  {p=l;
		while(p->next!=l)
			p=p->next;
		p->next=aux;
		aux->next=l;}
	else
		aux->next=aux;
	return(aux);
}


#endif // CONS_H_INCLUDED
