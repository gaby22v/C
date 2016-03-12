/* PROGRAM CARE INITIALIZEAZA SI AFISEAZA O LISTA SIMPLU INLANTUITA */
#include <stdio.h>
#include <conio.h>
struct lista
			{ int k;
				struct lista *next;
			}*l;
struct lista *init_l(struct lista *l)
{struct lista *aux;
 char c,c1;
 printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [D/N] ");
 scanf("%c",&c);c1=getchar();
 l=NULL;
 while ((c=='d') || (c=='D'))
	 {
		aux=(struct lista *)malloc(sizeof(struct lista));
		printf(" \n INTRODUCETI O CHEIE : ");
		scanf("%d",&aux->k);c1=getchar();
		aux->next=l;
		l=aux;
		printf("\n CONTINUATI ? ");
		scanf("%c",&c);c1=getchar();
	 }
	 return(l);
 }

 tipar(struct lista *l)
 { struct lista *p;
	 for(p=l;p;p=p->next) printf("%d->",p->k);
	 printf("NULL\n");
 }
 main()
 {struct lista*l;
	clrscr();
	l=init_l(l);
	printf("\n\nlista deja introdusa este :\n\n");
	tipar(l);
	getch();
	}
