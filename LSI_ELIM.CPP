/* Inserare in lista simplu inlantuita ordonata crescator */

#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <stdlib.h>
#include <string.h>
struct lista
	{int k;
	 struct lista *next;
	 };

struct lista *cons(int k,struct lista *l)
{ struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=k;
  (*aux).next=l;
  return (aux);
}

void tipar(struct lista *l)
 { struct lista *p;
	for (p=l;p;p=p->next)printf("%d->",p->k);
	printf("NULL\n");
 }


 struct lista *reverse(struct lista *l)
{struct lista *pred,*salv;
 pred=NULL;
 while(l)
	{
	  salv=l->next;
	  l->next=pred;
	  pred=l;
	  l=salv;
	  }
 return (pred);
 }

struct lista *init_l()
{char c,c1,ck,cc[5];   int ci,k;
 struct lista *l;
 printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [y/n] [n final]");
 printf("\n(elementele se introduc crescator):");
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

 struct lista *inser_l(struct lista *l,int k)
 {
  struct lista *aux,*p;

  aux=cons(k,NULL);
  if ((l==NULL) || (k<=l->k))
	{
	  aux->next=l;
	  l=aux;
	  return l;
	}
  else
	{
	 p=l;
	 while ((p->next) && (p->next->k<k))p=p->next;
	 aux->next=p->next;
	 p->next=aux;
	 return l;
	 }
  }


struct lista *stergere(struct lista *l,int k)
{ struct lista *q,*p;
if (k==l->k)
	{q=l;l=l->next;free(q);}
else
	{p=l;
	while (p->next->k!=k && p->next!=NULL)
	p=p->next;
	q=p->next;
	p->next=q->next;
	free(q);
	}
return (l);
}

void main()
  { struct lista *l;
    int k,x;
    clrscr();
    l=init_l();
    printf(" \n \n LISTA INITIALA :");
    tipar(l);
    printf(" \n \n CHEIA DE INSERAT :");
    scanf("%d",&k);
    l=inser_l(l,k);
    printf(" \n \n NOUA LISTA  ESTE : ");
    tipar(l);
    printf("ce element stergeti?  ");
    scanf("%d",&x);
    l=stergere(l,x);
    printf(" \n \n NOUA LISTA  ESTE : ");
    tipar(l);
    getch();
    }

