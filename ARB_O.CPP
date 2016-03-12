#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

typedef int tip; // tipul elementului din nodurile arborelui

struct nod { tip k;
	     int nf; // nr de fii
	     struct nod *fiu[30];
	   };
typedef struct nod arbore;

int creare(arbore **a, int nr, int parinte)
{
   tip el;
   (*a)=(arbore*)malloc(sizeof(arbore));
   if(!*a) return 0;
   printf("Dati info pentru fiul %d al lui %d: ",nr, parinte);
   scanf("%d",&el);
   (*a)->k=el;
   if(el)
   {
    printf("Dati numarul de fii pentru %d: ",el);
    scanf("%d",&(*a)->nf);
    for(int i=0;i<(*a)->nf;i++)
      creare(&(*a)->fiu[i], i+1, el);
   }
   return 1;
}

void adancime(arbore *a)
{
  if(a)
  {
   printf("%d  ",a->k);
   for(int i=0;i<a->nf;i++)
     adancime(a->fiu[i]);
  }
}

void latime(arbore *a, int e_radacina)
{
 if(a)
 {
   int i;
   if(e_radacina)
     printf("%d  ", a->k);
   for(i=0;i<a->nf;i++)
     printf("%d  ", a->fiu[i]->k);
   for(i=0;i<a->nf;i++)
     latime(a->fiu[i],0);
 }
}

void main()
{
   arbore *p;
   clrscr();
   printf("\nCrearea arborelui:\n");
   if(!creare(&p,0,0))
   {
      printf("\nMemorie insuficienta!");
      return;
   }
   printf("\nParcurgerea in adancime:\n");
   adancime(p);
   getch();
   printf("\nParcurgerea in latime:\n");
   latime(p,1);

   getch();
}