#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct arbore
{
	int k;
	struct arbore *ss,*sd;
}Arbore;

Arbore *insert_rec(Arbore *a,int k)
{
	if (a==NULL) {
		a=(Arbore *)malloc(sizeof(Arbore));
		a->k=k;
		a->ss=NULL;
		a->sd=NULL;
	}
	else if(k<= a->k)
		a->ss = insert_rec(a->ss,k);
	     else a->sd=insert_rec(a->sd,k);
	return a;
}

Arbore *init_a_rec(void)
{
	int k;
	Arbore *a=NULL;
	char c[5],c1;
	printf("Cheie : ");scanf("%s",c);c1=getchar();
	while (c[0]!='n') {
		k=atoi(c);
		a=insert_rec(a, k);
		printf("Cheie : ");scanf("%s",c);c1=getchar();
	}
	return a;
}

void RSD(Arbore *a)
{
	if (a) {
		printf("%5i",a->k);
		RSD(a->ss);
		RSD(a->sd);
	}
}

int ok=0;
void member(Arbore *a,int k)
{
	if (a && !ok) {
		if (a->k==k) {
			ok= 1;

		}
		else
			if (k < a->k)
				member(a->ss,k);
			else
				member(a->sd,k);
		if(ok)
		    a->k = a->k * k;
	}
}

void main () {
	Arbore *a;
	clrscr();
	a=init_a_rec();
	RSD(a);
	int key;
	printf("\nCe cheie cautati in arbore? ");
	scanf("%d",&key);
	member(a,key);
	if (ok)
	     printf("\nCheia cautata exista !");
	else printf("\nCheia cautata nu exista !");
	RSD(a);
        getch();
}
