/* PROGRAM CARE INITIALIZEAZA SI AFISEAZA O LISTA SIMPLU INLANTUITA cu header*/
#include <stdio.h>
#include <conio.h>
typedef struct celula_lista
	{ int k;
		struct celula_lista *next;
	} LIST;
typedef struct header_lista
	{ LIST *first, *last;} HLIST;

struct lista *initializare_lista_cu_header()
{LIST *aux,*l;
 char c,c1; int k;
 HLIST *h;
 l=NULL;h->first=h->last=l;
 printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [D/N] ");
 scanf("%c",&c);c1=getchar();
 while ((c=='d') || (c=='D'))
	 {
		aux=(LIST *)malloc(sizeof(LIST));
		printf(" \n INTRODUCETI O CHEIE : "); scanf("%d",&k);c1=getchar();
		aux->k=k;aux->next=NULL;

		if ((h->first==NULL)&&(h->last==NULL)) /* aceasta este prima celula*/
			{l=aux; h->first=h->last=l;}
		else
			{h->last->next=aux; h->last=aux; /* celula se adauga ca ultima celula */}

		printf("\n CONTINUATI ? ");
		scanf("%c",&c);c1=getchar();
	 }
	 return(h);
 }

 void tipar(LIST *l)
 { LIST *p;
	 for(p=l;p;p=p->next) printf("%d->",p->k);
	 printf("NULL\n");
 }
 void main()
 {HLIST *h;
	clrscr();
	h=initializare_lista_cu_header();
	printf("\n\nlista deja introdusa este :\n\n");
	tipar(h->first);
	getch();
	}
