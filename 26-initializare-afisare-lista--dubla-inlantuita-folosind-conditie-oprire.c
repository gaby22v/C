/* PROGRAM CARE INITIALIZEAZA SI AFISEAZA O LISTA SIMPLU INLANTUITA */
/* FOLOSIND O CONDITIE DE OPRIRE mai eleganta, dar si mai complicata*/
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct lista
{int k;
 struct lista *next;
 };

struct lista *cons(int k, struct lista *l)
{struct lista *aux;
 aux=(struct lista *)malloc(sizeof(struct lista));
 aux->k=k;
 aux->next=l;
 return(aux);
}

int *car(struct lista *l)
{if(l)return(l->k);
 else printf("lista vida \n ");
}

struct lista *cdr(struct lista *l)
{if(l)return(l->next);
 else
	{printf("lista vida \n ");
	 return(-1);
	 }
}

void afis_l(struct lista *l)
{struct lista *p;
 printf("  ");
 for(p=l;p;p=p->next)printf("%d-> ",p->k);
 printf("NULL ");
}

struct lista *reverse1(struct lista *l,struct lista *aux)
{if(!l) return(aux);
 return(reverse1(l->next,cons(l->k,aux)));
}

struct lista *reverse(struct lista *l)
{return(reverse1(l,NULL));
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
 {printf(" \n O CHEIE : ");
	scanf("%s",cc);c1=getchar();
	if (strcmp(cc,"n"))k=1;
	else k=-1;
	ci=atoi(cc); /*	ci=convert_sir_la_intreg(cc); */
	if (k!=-1)l=cons(ci,l);
	}
	return(reverse(l));
 }

  tipar(struct lista *l)
 { struct lista *p;
	 for(p=l;p;p=p->next) printf("%d->",p->k);
	 printf("NULL\n");
 }

 main()
{
	struct lista *l;
	clrscr();
	l=init_l();
	printf("\n\nlista deja introdusa este : \n\n");
	tipar(l);
	getch();
}