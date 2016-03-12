/* PROGRAM CARE CONCATENEAZA DOUA LISTE */
/* FUNCTIILE APPEND PREZENTATE SINT ECHIVALENTE DPDV AL EFECTULUI LOR */
#include <stdio.h>
#include <conio.h>
struct lista
			{ int k;
				struct lista *next;
			}*l;


struct lista *cons(int k,struct lista *l)
{ struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=k; aux->next=l;
  return(aux);
}

struct lista *rev1(struct lista *l,struct lista *aux)
{ if(!l) return(aux);
  return(rev1(l->next,cons(l->k,aux)));
}

struct lista *reverse(struct lista *l)
{return(rev1(l,NULL));
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

 /* aceasta functie rastoarna prima lista, dupa care, elementele
 ei sint adaugate in fata listei a doua */

/* struct lista *append( struct lista *l1, struct lista *l2)
 {struct lista *l;
	if (!l1) return(l2);
	else
	if (!l2) return(l1);
	else
		{ l1=reverse(l1);
			while(l1)
			{ l2=cons(l1->k,l2);
				l1=l1->next;
			}
			return(l2);
		}
	}*/
/*	  pentru a lasa neschimbate adresele de inceput ale listelor initiale
		 se recomanda lucrul cu niste liste copie */

/* aceasta functie parcurge prima lista, iar cind
ajunge la sfirsitul ei, "leaga" acolo lista a doua

struct lista *append(struct lista *l1, struct lista *l2)
{struct lista *l;
	if (!l1) return(l2);
	else
		if (!l2) return(l1);
		else
			{l=l1;
			 while(l->next)l=l->next;
			 l->next=l2;
			 return(l1);
			 }
	}
	*/

/*aceasta este o functie recursiva de concatenare a doua liste */

struct lista *append( struct lista *l1, struct lista *l2)
 {struct lista *l;
	if (!l1) return(l2);
	else
	if (!l2) return(l1);
	else

		return(cons(l1->k,append(l1->next,l2)));
	}

 main()
 {struct lista *l,*l1,*l2;
	clrscr();
	printf(" Introduceti elementele primei liste : \n ");
	l1=init_l(l1);
	printf(" \n Prima lista \n");
	tipar(l1);
	printf(" Introduceti elementele celei de a doua liste : \n ");
	l2=init_l(l2);
	printf(" \n A doua lista \n");
	tipar(l2);
	l=append(l1,l2);
	printf(" \n Lista rezultat (concatenarea celor doua liste) \n ");
	tipar(l);
	getch();
	}
