#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct lista
{
	int k;
	struct lista *next;
}listac;
listac *cons(int k,listac *l)
{
	listac *aux,*p;
	aux=(lista*)malloc(sizeof(listac));
	aux->k=k;
	if(l)
	{
		p=l;
		while(p->next!=l)
			p=p->next;
		p->next=aux;
		aux->next=l;
	}
	else
		aux->next=aux;
	return aux;
}
listac *init()
{
	char c,c1,ck,cc[5];
	int ci,k;
	listac *l;
	printf("Initializare:");scanf("%c",&c);
	c1=getchar();
	if(c!='n')
		k=1;
	else
		k=-1;
	l=NULL;
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
void tipar(listac *l)
{
	listac *p;
	printf("\n\n Lista:");
	if(l)
	{
		p=l;
		do
		{
			printf("%d->",p->k);
			p=p->next;
		}while(p!=l);
		printf("%d!!",l->k);
	}
	else
	{
		printf("vida");
	}
}

	int main()
	{
		listac *l;
		l=init();
		tipar(l);
		printf("Inversare:");
		l=reverse(l);
		tipar(l);
		getch();
	}