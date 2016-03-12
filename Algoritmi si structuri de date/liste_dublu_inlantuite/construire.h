#ifndef CONSTRUIRE_H
#define CONSTRUIRE_H
struct lista
{
	int k;
	struct lista *next,*prev;
};
struct lista *cons_ldi(int k,struct lista*l)
{
	struct lista *aux;
	aux=(struct lista*)malloc(sizeof(struct lista));
	aux->k=k;
	aux->next=l;
	aux->prev=NULL;
	if(l)
		l->prev=NULL;
	return aux;
}
#endif