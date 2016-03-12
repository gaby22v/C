#ifndef LUNGIME_H_INCLUDED
#define LUNGIME_H_INCLUDED
int lunglc(listac *l)
{
    int lungime=0;
listac *p;
p=l;
do
{
    lungime++;
p=p->next;
}while(p!=l);
return lungime;
}
#endif // LUNGIME_H_INCLUDED
