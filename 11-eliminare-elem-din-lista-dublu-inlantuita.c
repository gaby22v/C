#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct lista
	{int k;
	 struct lista *next,*prev;
	 };

struct lista *cons_2inl(int k,struct lista *l)
{ struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
	aux->k=k; aux->next=l;
	aux->prev=NULL; l->prev=aux;
	return(aux);
}

int tipar_2inl(struct lista *l)
 { struct lista *p;
	 printf("NULL");
	 for (p=l;p;p=p->next)printf("<-%d->",p->k);
	 printf("NULL\n");
   return(1);
   }

int tipar_chei(struct lista *l)
 { struct lista *p;
	 printf("NULL");
	 for (p=l;p;p=p->next)printf(" | %d %d %d",p->prev->k,p->k,p->next->k);
	 printf("NULL\n");
	 return(1);
	 }



struct lista *reverse_2inl(struct lista *l)
{struct lista *pred,*salv;
 pred=NULL;
 while(l)
	{
	  salv=l->next;
		l->next=pred;
		l->prev=l->next;
	  pred=l;
	  l=salv;
	  }
 return(pred);
 }

struct lista *init_2inl(struct lista *l)
 {
	int ci,k;
	char c,c1,ck,cc[5];
	l=NULL;
 printf(" \n LISTA VA FI ORDONATA CRESCATOR DE LA INTRODUCERE ! \n");
 printf("doriti sa incepeti initializarea listei [n pentru terminare]?");
 scanf("%c",&c);c1=getchar();
 if (c!='n')k=1; else k=-1;
 while (k!=-1)
	{
		printf(" o cheie : ");
		scanf("%s",cc);c1=getchar();
		if (strcmp(cc,"n"))k=1;
		else k=-1;
		ci=atoi(cc);
		if(k!=-1)l=cons_2inl(ci,l);
	}
	return(reverse_2inl(l));

 }
 struct lista *OUT_2inl(struct lista *l,int k)
 { struct lista *capat, *p;
	 if ((!l) || (k<l->k)) return(l);
	 else
		if (l->k ==k)return(l->next);
		else
			{capat=l;
			 while((l->next) &&(l->next->k!=k))l=l->next;
			 if (l->next)
				{p=l->next;
				if (l->next->next) { l->next->next->prev=l;}
				l->next=l->next->next;
				}
			 else printf("\n cheia %d nu apartine listei! ",k);
			 /*free(p);*/
			 return(capat);
			 }
	 }

	main()
	{ struct lista *l;
		int k;
		clrscr();
		l=init_2inl(l);
		printf(" \n \n LISTA INITIALA : ");
		tipar_2inl(l);
		printf(" \n \n CHEIA DE ELIMINAT :");
		scanf("%d",&k);
		l=OUT_2inl(l,k);
		printf(" \n \n  NOUA LISTA  ESTE : ");
		tipar_2inl(l);
		getch();
		}

