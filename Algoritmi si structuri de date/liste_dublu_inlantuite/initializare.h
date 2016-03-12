#ifndef INITIALIZARE_H
#define INITIALIZARE_H
#include"construire.h"
struct lista *init_ldi(struct lista *l)
{
int ci,k;
char c,c1,ck,cc[5];
l=NULL;
printf("Doriti sa incepeti initializarea listei [n pentru terminare]?");
scanf("%c",&c);c1=getchar();
if (c!='n')
k=1;
else
k=-1;
while (k!=-1)
{
printf(" o cheie : ");
scanf("%s",cc);c1=getchar();
if (strcmp(cc,"n"))
k=1;
else
k=-1;
ci=atoi(cc);
if(k!=-1)
l=cons_ldi(ci,l);
}
return(l);
} 
#endif