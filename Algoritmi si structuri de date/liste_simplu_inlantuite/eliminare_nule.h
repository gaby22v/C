#ifndef ELIMINARE_NULE_H
#define ELIMINARE_NULE_H
struct lista *eliminare_nule(struct lista *l)
{
int x;
struct lista *p,*q;
for(p=l;p;)
{
x=p->k;
if(x==0)
{
q=p->next;
printf("\nSe sterge nr. nule%i. ",x);
l=eliminare(l,p->k);
printf("\nLista ramane: ");
afisare(l);
p=q;
}
else
p=p->next;
}
return l;
} 
#endif