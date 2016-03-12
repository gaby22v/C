#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct lista
{
	int k;
	struct lista *next;
};
struct lista*init(struct lista*l)
{
	struct lista *aux;
	char c;
	l=NULL;
	printf("\n Doriti sa incepeti initializarea listei? (d/D pt cont)");
	c=getche();
	while((c=='d')||(c=='D'))
	{
		aux=(struct lista*)malloc(sizeof(struct lista));
		printf("\n Informatia: ");
		scanf("%d",&aux->k);
		aux->next=l;
		l=aux;
		printf("\n Continuati?");
		c=getche();
	}
	return l;
}

void afisare(struct lista*l)
{
	struct lista*p;
	printf("\n Lista este: \n");
	for(p=l;p!=NULL;p=p->next)
		printf("%d->",p->k);
		printf("NULL");
}

void main()
{
	struct lista*l;
	clrscr();
	printf("\n Se creeaza lista");
	l=init(l);
	afisare(l);
	getch();
}
