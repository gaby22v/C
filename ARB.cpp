#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <math.h>

struct nod
	{ int k;
		struct nod *ss,*sd;
		};

struct nod *init_ab()
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
			aux->ss=init_ab();
			printf("\n Creez fiul drept pentru nodul %i: ",aux->k);
			aux->sd=init_ab();
			return(aux);
		}
	else  return(NULL);

}

void RSD( struct nod *a)	
{if(a)
	{
	 printf("%d \n",a->k);
	 RSD(a->ss);
	 RSD(a->sd);
	}
}

void SRD( struct nod *a)
{if(a)
	{SRD(a->ss);
	 printf("%d \n",a->k);
	 SRD(a->sd);
	}
}

void SDR( struct nod *a)
{if(a)
	{SDR(a->ss);
	 SDR(a->sd);
	 printf("%d \n",a->k);
	}
}

void main()
{ struct nod *a;

	clrscr();
	a=init_ab();
//cele 3 parcurgeri
	printf("\n Parcurgere RSD:\n");
	RSD(a);
	printf("\n Parcurgere SRD:\n");
	SRD(a);
	printf("\n Parcurgere SDR:\n");
	SDR(a);

getch();
}