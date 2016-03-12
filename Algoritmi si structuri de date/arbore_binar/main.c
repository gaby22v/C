#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <creare.h>
#include <rsd.h>
#include <sdr.h>
#include <srd.h>
#include <suma.h>
#include <frunza.h>
#include <noduri.h>
#include <interval.h>
int S=0;
int nr=0;
int x=3,y=6;
void main()
{
 arbore *a;
 clrscr();
 printf("Se creeaza arborele\nRadacina: ");
 a=creare();
// printf("\nArborele RSD este: ");
// RSD(a);
// printf("\nArborele SRD este: ");
// SRD(a);
// printf("\nArborele SDR este: ");
// SDR(a);
// printf("Suma= %d",suma(a));
// frunza(a);
// interval(a);
 printf("\n Nr= %d",noduri(a));
 getch();

}
