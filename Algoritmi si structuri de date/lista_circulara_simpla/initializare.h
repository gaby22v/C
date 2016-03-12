#ifndef INITIALIZARE_H_INCLUDED
#define INITIALIZARE_H_INCLUDED
#include"construire.h"
listac *init_l()
{
char c,c1,ck,cc[5];
int ci,k;
listac *l;
printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [y/n] [n final]");scanf("%c",&c);
c1=getchar();
if (c!='n')
    k=1;
else
k=-1;
l=NULL;
while (k!=-1)
{
    printf(" O CHEIE : ");scanf("%s",cc);
c1=getchar();
if (strcmp(cc,"n"))
    k=1;
else
 k=-1;
ci=atoi(cc); /* ci=convert_sir_la_intreg(cc); */
if (k!=-1)
l=cons_c(ci,l);
}
return l;
}

#endif // INITIALIZARE_H_INCLUDED
