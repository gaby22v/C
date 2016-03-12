#ifndef INITIALIZARE_H
#define INITIALIZARE_H
QUEUE initq(QUEUE q)
{
char c,c1,ck,cc[5];
int ci,k;
printf(" DORITI SA INCEPETI INITIALIZAREA COZII ? [y/n] [n final]");scanf("%c",&c);
c1=getchar();
if (c!='n')k=1;
else k=-1;
newq(q);
while (k!=-1)
{
printf(" \n O CHEIE : ");scanf("%s",cc);
c1=getchar();
if (strcmp(cc,"n"))k=1;
else k=-1;
ci=atoi(cc); 
if (k!=-1)
addq(q,ci);
}
return(q);
}
#endif