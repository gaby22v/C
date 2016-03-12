#include <stdio.h>
#include <conio.h>
#include <math.h>
#include"alloc.h"
 struct lista
{
int k;
struct lista *next;
};
void afisare(struct lista*l);
struct lista*init(struct lista*l)
{
	struct lista *aux,*p;
	char c;
	l=NULL;
	printf("\n Dorit sa incepeti initializarea liste?(d/d)");
	c=getche();
	while((c=='d')||(c=='D'))
	{
		aux=(struct lista*) malloc(sizeof(struct lista));
		printf("\n Informatia=");
		scanf("%d",&aux->k);
		if((aux->k<l->k)||(l==NULL))
		{
		aux->next=l;
		l=aux;
		}
		else
		{
		 for(p=l;p->next->k<aux->k&&p->next!=NULL;p=p->next);
		 aux->next=p->next;
		 p->next=aux;
		}
		afisare(l);
		printf("\n Continuati?");
		c=getche();
	 }
	 return l;
}
void afisare(struct lista*l)
{
 struct lista*p;
 for(p=l;p!=NULL;p=p->next)
 printf("%d->",p->k);
 printf("NULL");
}
void main(void)
{
 lista*l;
 clrscr();
 printf("\n SE creaza lista");
 l=init(l);
 afisare(l);
getch();
}



