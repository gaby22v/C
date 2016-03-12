#ifndef ELIMINARE_NEGATIVE_H
#define ELIMINARE_NEGATIVE_H
struct lista *eliminare_negative(struct lista *l)
{
int x;
struct lista *p,*q;
for(p=l;p;)
{
x=p->k;
if(x<0)
{
q=p->next;
printf("\nSe sterge nr. negativ %i. ",x);
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