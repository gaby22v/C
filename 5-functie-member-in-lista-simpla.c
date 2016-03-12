/* PROGRAM CARE TESTEAZA EXISTENTA UNEI CHEI INTR-O LISTA SIMPLU INLANTUITA*/
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

 int member(int k, struct lista *l)
 {struct lista *p;
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
 main()
 {struct lista *l;
  int k;
	clrscr();
	printf(" Introduceti elementele  listei : \n ");
	l=init_l(l);
	printf(" \n Lista :");
	tipar(l);
	printf(" Introduceti cheia de cautat : ");
	scanf(" %d",&k);
	if (member(k,l)) printf(" Cheia %d exista in lista ",k);
	else printf(" Cheia %d nu exista in lista ",k);
	getch();
	}
