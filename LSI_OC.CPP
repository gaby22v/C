#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <conio.h>
struct lista
			{ int k;
				struct lista *next;
			}*l;


struct lista*insert(struct lista *l, int x, int poz);

struct lista *init_l();

void tipar(struct lista *l);

struct lista*insert(struct lista *l, int x, int poz)
{
	struct lista*p,*q,*aux;
	int i=1;
	aux=(struct lista*)malloc(sizeof(struct lista));
	aux->k=x;
	if(poz==1)
	{
		aux->next=l;
		l=aux;
	}
	else
	{
		for(p=l;p&&i<poz-1;p=p->next, i++);
		q=p->next;
		aux->next=q;
		p->next=aux;
	}
	return l;
}


struct lista *init_l() /* creeaza lista */
{
 char c,ck,cc[5];
 int ci,k;
 struct lista *l,*p;
 printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [y/n] [n final]");
 scanf("%c",&c);
 if (c!='n')
    k=1;
 else
    k=-1;
 l=NULL;
 while (k!=-1)
 {      printf(" \n O CHEIE : ");
	scanf("%s",cc);
	if (strcmp(cc,"n")!=0)
	   k=1;
	else k=-1;
	ci=atoi(cc);
	if (k!=-1)
	{
		int poz=2;

		if((ci<=l->k)||(l==NULL))
		  l=insert(l,ci,1);
		else
		{
		for(p=l; p->next->k < ci && p->next; p=p->next)poz++;
		l=insert(l,ci,poz);
		}
		tipar(l);
	}
 }
	return (l);
 }


 void tipar(struct lista *l) /* afiseaza elementele listei */
 { struct lista *p;
	 for(p=l;p;p=p->next) printf("%d->",p->k);
	 printf("NULL\n");
 }

 void main()
 {
   struct lista *l;
   clrscr();
   l=init_l();
   tipar(l);
   getch();
   }