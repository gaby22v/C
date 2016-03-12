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

struct lista *rev1(struct lista *l,struct lista *aux)
{ if(!l) return(aux);
  return(rev1(l->next,cons(l->k,aux)));
}

struct lista *reverse(struct lista *l)
{return(rev1(l,NULL));
}

/* struct lista *reverse(struct lista *l)
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
 */
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

 struct lista *inser_l(struct lista *l,int k)
 {
  struct lista *aux,*capat;

  aux=cons(k,NULL);
  if ((l==NULL) || (k<=l->k))
	{ aux->next=l;
	  return(aux);
	}
  else
	{capat=l;
	 while ((l->next) && (l->next->k<k))l=l->next;
	 aux->next=l->next;
	 l->next=aux;
	 return(capat);
	 }
  }


  main()
  { struct lista *l;
    int k;
    clrscr();
    l=init_l(l);
		printf(" \n \n LISTA INITIALA (elementele se introduc crescator): ");
    tipar(l);
    printf(" \n \n CHEIA DE INSERAT :");
    scanf("%d",&k);
    l=inser_l(l,k);
    printf(" \n \n  NOUA LISTA  ESTE : ");
    tipar(l);
    getch();
    }

