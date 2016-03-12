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

struct lista *init_l()
{
 char c,ck,cc[5],c1;
 int ci,k;
 struct lista *l;
 printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [y/n] [n final]");
 scanf("%c",&c);
 c1=getchar();
 if (c!='n')k=1;
 else k=-1;
 l=NULL;
 while (k!=-1)
 {      printf(" O CHEIE : ");
	scanf("%s",cc);
	c1=getchar();
	if (strcmp(cc,"n"))k=1;
	else k=-1;
	ci=atoi(cc); /*	ci=convert_sir_la_intreg(cc); */
	if (k!=-1)l=cons(ci,l);
	}
	return(l);
 }


void tipar(struct lista *l)
 { struct lista *p;
	 for(p=l;p;p=p->next) printf("%d->",p->k);
	 printf("NULL\n");
 }

struct lista *interclasare(struct lista *l1, struct lista *l2)
{
struct lista *l3,*q,*p;
p=l1; q=l2;
l3=NULL;

if(!p)
 return reverse(q);
 else
 if(!q)
 return reverse(p);
 else
 {
 while((q)&&(p))
  {
   if(p->k>q->k)
   {
     l3=cons(q->k,l3);
       q=q->next;
   }
   else
    {
     l3=cons(p->k,l3);
     p=p->next;
    }
 }
if(!q)
{
 while(p)
  {
  l3=cons(p->k,l3);
  p=p->next;
  }
 }
else
if(!p)
{
  while(q)
   {
  l3=cons(q->k,l3);
  q=q->next;
  }
}
}
return l3;
}
struct lista *crescator(struct lista *l)
 {
  struct lista *p,*q;
   int aux;
    for(p=l;p->next!=NULL;p=p->next)
      for(q=p->next;q;q=q->next)
	if(q->k<p->k)
	 {
	  aux=q->k;
	  q->k=p->k;
	  p->k=aux;
	 }
   return l;
 }

void main(void)
 {struct lista *l1,*l2,*l3;
  int k;
	clrscr();
	printf(" Introduceti elementele  listei 1: \n ");
	l1=init_l();
	printf(" \n Lista :");
	l1=reverse(l1);
	tipar(l1);
	printf(" Introduceti elementele  listei 2: \n ");
	l2=init_l();
	printf(" \n Lista :");
	l2=reverse(l2);
	tipar(l2);
	printf("\nLista 1 (ordonata):");
	l1=crescator(l1);
	tipar(l1);
	printf("\nLista 2 (ordonata):");
	l2=crescator(l2);
	tipar(l2);
	printf("\nLista interclasata:\n");
	l3=interclasare(l1,l2);
	tipar(reverse(l3));
	getch();
	}
