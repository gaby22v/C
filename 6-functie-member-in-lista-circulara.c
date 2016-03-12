/* PROGRAM CARE TESTEAZA EXISTENTA UNEI CHEI INTR-O LISTA SIMPLU INLANTUITA
CIRCULARA PE UN SENS*/
#include <stdio.h>
#include <conio.h>
struct lista
			{ int k;
				struct lista *next;
			}*l;


struct lista *cons_c(int k,struct lista *l)
{ struct lista *aux,*p;
	aux=(struct lista *)malloc(sizeof(struct lista));
	aux->k=k;
	p=l;
	while(p->next!=l)p=p->next;
	p->next=aux;
	if (l)aux->next=l;
	else aux->next=aux;
	return(aux);
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
	if (k!=-1)l=cons_c(ci,l);
	}
	return(l);
 }


 tipar(struct lista *l)
 { 	struct lista *p;

		if(l)
		{p=l;
		do
				{	printf("%d->",p->k);
			p=p->next;
		}while (p!=l);
		printf("%d!!",l->k);
	}
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
	 while (p!=l && !flag);
	 return(flag);
	}
 }
 main()
 {struct lista *l;
  int k;
	clrscr();
	printf(" \n Introduceti elementele  listei : \n ");
	l=init_l(l);
	printf(" \n Lista :");
	tipar(l);
	printf(" \nIntroduceti cheia de cautat : ");
	scanf(" %d",&k);
	if (member(k,l)) printf(" Cheia %d exista in lista ",k);
	else printf(" Cheia %d nu exista in lista ",k);
	getch();
	}
