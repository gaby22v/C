/* Programul inverseaza o lista simplu inlantuita */

#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct lista
{
	int k;
	struct lista *next;
};
struct lista *cons(int k, struct lista *l)
{
	struct lista *aux;
	aux=(struct lista*)malloc(sizeof(struct lista));
	aux->k=k;
	aux->next=l;

	return aux;
}

struct lista*init(struct lista*l)
{
	int x;
	char c;
	l=NULL;
	printf("\n Doriti sa incepeti initializarea listei? (d/D pt cont)");
	c=getche();
	while((c=='d')||(c=='D'))
	{
		printf("\n Informatia: ");
		scanf("%d",&x);
		l=cons(x,l);
		printf("\n Continuati?");
		c=getche();
	}
	return l;
}

void afisare(struct lista*l)
{
	struct lista*p;
	printf("\n Lista este: \n ");
	for(p=l;p!=NULL;p=p->next)
		printf("%d->",p->k);
		printf("NULL");
}

struct lista *reverse(struct lista *l)
{
  struct lista *pred, *salv;
  pred=NULL;
  while(l)
  {
      salv=l->next;
      l->next=pred;
      pred=l;
      l=salv;
  }
  return pred;
}
void main()
{
	struct lista*l;
	clrscr();
	printf("\n Se creeaza lista");
	l=init(l);
	afisare(l);
	l=reverse(l);
	printf("\n Se inverseaza lista \n");
	afisare(l);
	getch();
}
