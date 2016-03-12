//lista de liste
//tabela hash cu numarul de aparitii pentru fiecare element din lista initiala
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
//strutura lista
typedef struct lista
{
int k;
struct lista *next;
};

//structura tabela hash
typedef struct hash
{
int k;
struct lista *lis;
struct hash *next;
};

//construim lista
struct lista *cons(int k,struct lista *l)
{ struct lista *aux;
aux=(struct lista *)malloc(sizeof(struct lista));
aux->k=k; aux->next=l;
return(aux);
}

//initializare tabela hash
struct hash *init_h(struct hash *h)
{
h=NULL;
h->lis=NULL;
return h;
}

//construim un nod pentru tabela hash
struct hash *cons_h(int k,struct hash *h)
{
struct hash *aux;
aux=(struct hash *)malloc(sizeof(struct hash));
aux->k=k;
aux->next=h;
aux->lis=NULL;
return(aux);
}

//functii recursive pentru intoarcerea listei
struct lista *rev1(struct lista *l,struct lista *aux)
{ if(!l) return(aux);
return(rev1(l->next,cons(l->k,aux)));
}

struct lista *reverse(struct lista *l)
{return(rev1(l,NULL));
}

//contruirea listei
struct lista *init_l()
{char c,c1,ck,cc[5]; int ci,k;
struct lista *l;
printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [y/n] [n final]");
scanf("%c",&c); c1=getchar();
if (c!='n')k=1;
else k=-1;
l=NULL;
while (k!=-1)
{printf(" \n O CHEIE : ");
scanf("%s",cc);c1=getchar();
if (strcmp(cc,"n"))k=1;
else k=-1;
ci=atoi(cc); // ci=convert_sir_la_intreg(cc);
if (k!=-1)l=cons(ci,l);
}
return(reverse(l));
}

//afisarea listei
tipar(struct lista *l)
{ struct lista *p;
for(p=l;p;p=p->next) printf("%d->",p->k);
printf("NULL\n");
}

//cautarea unui element in lista
int member(int k, struct hash *l)
{struct hash *p;
int flag;
if(!l) return(0);
else
{p=l;/* lucrez cu o copie pentru a nu modifica adresa initiala a lui "l"*/
flag=0;
do
{if(p->k==k) flag=1;
else p=p->next;
}
while (p && !flag);
return(flag);
}
}

//construirea tabelei hash
struct hash *cons_hash(struct lista *l, struct hash *h)
{
struct lista *auxl;
struct hash *auxh;
int poz=1;
auxl=l;
while(auxl)
{
if(member(auxl->k,h)==0)
{
h=cons_h(auxl->k,h);
h->lis=cons(poz,h->lis);
}
else
{
auxh=h;
while(auxh->k!=auxl->k)
auxh=auxh->next;
auxh->lis=cons(poz,auxh->lis);
}
auxl=auxl->next;
poz++;
}
return h;
}

//tipar tabela hash
void tipar_h(struct hash *h)
{
struct hash *auxh;
struct lista *auxl;
auxh=h;
printf("\n");
while(auxh)
{
printf("\n %3d->",auxh->k);
auxl=auxh->lis;
auxl=reverse(auxl);
while(auxl)
{
printf("%3d",auxl->k);
auxl=auxl->next;
}
auxh=auxh->next;
}
}

int main()
{struct lista *l;
int k;
struct hash *h;
printf(" Introduceti elementele listei : \n ");
l=init_l();
printf(" \n Lista :");
tipar(l);
h=init_h(h);
h=cons_hash(l,h);
tipar_h(h);
getch();
}

