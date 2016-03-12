#ifndef AFISARE_H_INCLUDED
#define AFISARE_H_INCLUDED
void tipar(listac *l)
{
    listac *p;
printf("\n\n Lista : ");
if(l)
{
p=l;
do
{
printf("%d->",p->k);
p=p->next;
}
while (p!=l);
printf("%d!!",l->k);/*mai afisam o data primul element
pentru a arata ca lista este circulara*/
}
else
    printf("vida");
}
#endif // AFISARE_H_INCLUDED
