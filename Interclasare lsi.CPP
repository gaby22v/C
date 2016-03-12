/* PROGRAM CARE INTERCLASEAZA DOUA LISTE SIMPLU INTALNTUITE*/
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <string.h>
#include <stdlib.h>

struct lista
			{ int k;
				struct lista *next;
			}*l;


struct lista *cons(int k,struct lista *l)
{ struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=k; aux->next=l;
  l=aux;
  return(l);
}

struct lista *rev1(struct lista *l,struct lista *aux)
{ if(!l) return(aux);
  return(rev1(l->next,cons(l->k,aux)));
}

struct lista *reverse(struct lista *l)
{return(rev1(l,NULL));
}

int cauta(struct lista *l,int ci)
 {struct lista *p;
 int j=0;
 for(p=l;p;p=p->next)
 if (p->k==ci)
 j++;
 return(j);
 }

	struct lista *init_l()
{char c,c1,ck,cc[5];   int ci,k;
 struct lista *l;
 printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [y/n] [n final]");
 scanf("%c",&c); c1=getchar();
 if (c!='n')k=1;
 else k=-1;
 l=NULL;
 while (k!=-1)
 {
 do
 {
 printf(" \n O CHEIE : ");
	scanf("%s",cc);c1=getchar();
	if (strcmp(cc,"n"))k=1;
	else k=-1;
	ci=atoi(cc); /*	ci=convert_sir_la_intreg(cc); */
	}
	while (cauta(l,ci)!=0);
	if (k!=-1)l=cons(ci,l);
	}
	return(l);
 }


 tipar(struct lista *l)
 { struct lista *p;
	 for(p=l;p;p=p->next) printf("%d->",p->k);
	 printf("NULL\n");
 }



void main(void)
 {struct lista *l1;
  int k;
	clrscr();
	printf(" Introduceti elementele  listei: \n ");
	l1=init_l();
	printf(" \n Lista :");
	l1=reverse(l1);
	tipar (l1);
	getch();
	}
