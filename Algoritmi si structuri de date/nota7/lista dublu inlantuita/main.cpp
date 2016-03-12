#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct lista
{
	int k;
	struct lista *next,*prev;
};
struct lista *cons(int k,struct lista *l)
{
	struct lista *aux;
	aux=(struct lista *)malloc(sizeof(struct lista));
	aux->k=k;
	aux->next=l;
	aux->prev=NULL;
	if(l)
		l->prev=NULL;
	return aux;
}
struct lista *init(struct lista *l)
{
	int ci,k;
	char c,c1,ck,cc[5];
	l=NULL;
	printf("Initializare:");scanf("%c",&c);
	c1=getchar();
	if(c!='n')
		k=1;
	else
		k=-1;
	while(k!=-1)
	{
		printf("O cheie:");scanf("%s",cc);
		c1=getchar();
		if(strcmp(cc,"n"))
			k=1;
		else
			k=-1;
		ci=atoi(cc);
		if(k!=-1)
			l=cons(ci,l);
	}
	return l;
}
void afisare(struct lista *l)
{
	struct lista *p;
	printf("NULL");
	for(p=l;p;p=p->next)
		printf("<=>%d",p->k);
	printf("<=>NULL\n");
}
//pe loc
struct lista *reverse(struct lista *l)
{
	struct lista *prev,*salv;
	prev=NULL;
	while(l)
	{
		salv=l->next;
		l->next=prev;
		l->prev=salv;
		prev=l;
		l=salv;
	}
	return prev;
}
int main()
{
	struct lista *l;
	l=init(l);
	afisare(l);
	printf("Reverse:");
	l=reverse_copiere(l);
	afisare(l);
	getch();
}