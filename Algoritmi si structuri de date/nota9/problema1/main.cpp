#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct nod
{
	int k;
	struct nod *st,*dr;
}arbore;
arbore *insert_rec(arbore *a,int k)
{
	if(a)
	{
		a=(arbore*)malloc(sizeof(arbore));
		a->k=k;
		a->st=NULL;
		a->dr=NULL;
	}
	else
		if(k<=a->k)
			a->st=insert_rec(a->st,k);
		else
			a->dr=insert_rec(a->dr,k);
		return a;
}
arbore *init_a_rec()
{
	int k;
	arbore *a=NULL;
	char c[5],c1;
	printf("Cheie:");scanf("%s",c);
	c1=getchar();
	while(c[0]!='n')
	{
		k=atoi(c);
		a=insert_rec(a,k);
		printf("Cheie:");scanf("%s",c);
		c1=getchar();
	}
	return a;
}
void RSD(arbore *a)
{
	if(a)
	{
		printf("%i",a->k);
		RSD(a->st);
		RSD(a->dr);
	}
}
int ok=0;
void member(arbore *a,int k)
{
	if(a&&!ok)
	{
		if(a->k==k)
		{
			ok=1;
		}
		else
		{
			if(k<a->k)
				member(a->st,k);
			else
				member(a->dr,k);
		}
		a->k=a->k*k;
	}
}
int main()
{
	arbore
	*a;
	int k;
	a=init_a_rec();
	RSD(a);
	printf("\nCheia cautata:");scanf("%i",&k);
	member(a,k);
	if(ok)
	{
		printf("\nCheia cautata exista!");
	}
	else
		printf("\nCheia cautata nu exista");
	RSD(a);
}