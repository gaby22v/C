#ifndef CONSTRUIRE_H_INCLUDED
#define CONSTRUIRE_H_INCLUDED
typedef struct lista
{
    int k;
struct lista *next;
} listac;
listac *cons_c(int k,listac *l)
{
    listac *aux,*p;
aux=(listac *)malloc(sizeof(listac));
aux->k=k;
if(l) //lista mai are cel putin un element
{
p=l;
while(p->next!=l) /* ne deplasam in lista pana la ultimul element */
p=p->next;
p->next=aux;
aux->next=l;
}
else //daca lista este vida, adaugam primul element
aux->next=aux;
return aux;
}
#endif // CONSTRUIRE_H_INCLUDED
