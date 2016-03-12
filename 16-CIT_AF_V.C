
#include <stdio.h>
#include <conio.h>

void citire_v(int n, int v[])
{ int i;
  printf(" \n INCEPETI INITIALIZAREA VECTORULUI :");
  for (i=0;i<n;i++)
	 { printf ("\n x[%d]=",i);
		scanf("%d",&v[i]);
	 }
}


void afisare_v(int n, int v[])
{ int i;
  printf("\n ELEMENTELE VECTORULUI :");
  for (i=0;i<n;i++)
	printf ("%d ",v[i]);

}
