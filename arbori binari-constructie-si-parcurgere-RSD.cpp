#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct arbore
	{ int k;
	  struct arbore *ss,*sd;
	};


struct arbore *init_a_2()  //functie recursiva
{ struct arbore *aux;
  char nn,c1;
  int k;
  printf(" e nod NULL ? ");
  scanf("%c",&nn);c1=getchar();
  if ( (nn== 'n')||(nn== 'N'))
		{ printf(" cheie : ");
		  scanf("%d",&k);c1=getchar();
		  aux=(struct arbore *) malloc (sizeof (struct arbore ));
		  aux->k=k;
		  printf("\n Creez fiul stang pentru nodul %i: ",aux->k);
		  aux->ss=init_a_2();
		  printf("\n Creez fiul drept pentru nodul %i: ",aux->k);
		  aux->sd=init_a_2();
		  return(aux);
		}
  else  return(NULL);

}

void RSD( struct arbore *a)
{
   if(a)
	{
         printf("%d  ",a->k);
	 RSD(a->ss);
	 RSD(a->sd);
	}
}

void main()
{ struct arbore *a;
	clrscr();
	printf("\n Creez radacina -");
	a=init_a_2();
	printf("\n Parcurgerea in preordine (RSD): ");
	RSD(a);
	getch();
} 



