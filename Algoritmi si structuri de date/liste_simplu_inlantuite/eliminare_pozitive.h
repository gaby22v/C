#ifndef ELIMINARE_POZITIVE_H
#define ELIMINARE_POZITIVE_H
struct lista *eliminare_pozitive(struct lista *l)
{
int x;
struct lista *p,*q;
for(p=l;p;)
{
x=p->k;
if(x>0)
{
q=p->next;
printf("\nSe sterge nr. pozitiv %i. ",x);
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