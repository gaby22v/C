#ifndef CONSTRUIRE_H
#define CONSTRUIRE_H
struct lista
{
	int k;
	struct lista *next;
};
struct lista *adaugare(int k,struct lista *l)
{
	struct lista *aux;
	aux=(struct lista*)malloc(sizeof(struct lista));
	aux->k=k;
	aux->next=l;
	return aux;
}
#endif