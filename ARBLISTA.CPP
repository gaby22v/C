#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct nod
	{ int k;
		struct nod *ss,*sd;
		};

struct nod *l,*a;

struct nod *init_a_2()
{ struct nod *aux;
	char nn,c1;
	int k;
	printf(" e nod NULL ? ");
	scanf("%c",&nn);c1=getchar();
	if ( (nn== 'n')||(nn== 'N'))
		{ printf(" cheie : ");
			scanf("%d",&k);c1=getchar();
			aux=(struct nod *) malloc (sizeof (struct nod ));
			aux->k=k;
			printf("\n Creez fiul stang pentru nodul %i: ",aux->k);
			aux->ss=init_a_2();
			printf("\n Creez fiul drept pentru nodul %i: ",aux->k);
			aux->sd=init_a_2();
			return(aux);
		}
	else  return(NULL);

}

void SRD( struct nod *a)
{if(a)
	{SRD(a->ss);
	 printf("%3d ",a->k);
	 SRD(a->sd);
	}
}

struct nod *init_lista(struct nod *p)
{
p=NULL;
return p;
}

struct nod *cons(int k,struct nod *l)
{ struct nod *aux;
	aux=(struct nod *)malloc(sizeof(struct nod));
	aux->k=k; aux->sd=l;
	l=aux;
	return(aux);
}

struct nod *lista_arb(struct nod *a)
{
if(a)
 {
 l=cons(a->k,l);
 lista_arb(a->ss);
 lista_arb(a->sd);
 }
return l;
}

struct nod *tipar_lista(struct nod *l)
{
struct nod *p;
p=l;
 while(p)
 {
 printf("%3d",p->k);
 p=p->sd;
 }
}
main()
{ struct nod *a;
	clrscr();
	a=init_a_2();
	printf("\n Afisare arbore (SRD) :\n");
	SRD(a);
	l=init_lista(l);
	l=lista_arb(a);
	printf("\n Afisare lista: \n");
	tipar_lista(l);
	getch();
}



