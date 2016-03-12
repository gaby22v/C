#ifndef SUMA_H_INCLUDED
#define SUMA_H_INCLUDED
int sumlc(listac *l)
{
int suma=0;
listac *p;
p=l;
do
{
    suma=suma+p->k;
p=p->next;
}while(p!=l);
return suma;
}

#endif // SUMA_H_INCLUDED
