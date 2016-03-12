/* PROGRAM CARE ELIMINA PRIMA APARITIE A UNEI CHEI DINTR-O LISTA */
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct lista
	{int k;
	 struct lista *next;
	 };

struct lista *cons(int k,struct lista *l)
{ struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=k; aux->next=l;
  return(aux);
}

int tipar(struct lista *l)
 { struct lista *p;
   for (p=l;p;p=p->next)printf("%d->",p->k);
   printf("NULL\n");
   return(1);
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
 return(pred);
 }

 struct lista *init_l(struct lista *l)
 {struct lista *aux;
 int k;
 char opt,cr;
 l=NULL;
 printf("doriti sa incepeti initializarea listei ?");
 scanf("%c",&opt);cr=getchar();
 while ((opt=='d') || (opt=='D'))
	{ aux=(struct lista *)malloc(sizeof(struct lista));
	  printf(" introduceti o cheie : ");
	  scanf("%d",&aux->k);cr=getchar();
	  aux->next=l;
	  l=aux;
	  printf("continuati ?");
	  scanf("%c",&opt);cr=getchar();
	}
	l=reverse(l);
	return(l);

 }

 struct lista *elim_l(struct lista *l,int k)
 {
	struct lista *capat;
	tipar(l);
	if (l->k == k) return(l->next);
	else
	{ capat=l;
	  while ((l->next) && (l->next->k!=k))l=l->next;
	  if (l->next) l->next=l->next->next;
	  return(capat);
	 }
  }
  main()
  { struct lista *l;
    int k;
    clrscr();
    l=init_l(l);
    printf(" \n \n LISTA INITIALA : ");
    tipar(l);
    printf(" \n \n CHEIA DE ELIMINAT:");
    scanf("%d",&k);
    l=elim_l(l,k);
    printf(" \n \n  NOUA LISTA  ESTE : ");
    tipar(l);
    getch();
    }

