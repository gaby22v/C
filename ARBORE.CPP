/*
PROGRAMUL CREEAZA UN ARBORE BINAR, IL PARCURGE RSD,SRD,SDR
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct nod
{ int inf;
  struct nod *st,*dr;
} arbore;

int S=0;

arbore *creare()
{
  arbore *aux;
  int n;
  scanf("%d",&n);
  if(n)
  {
     aux=(arbore *)malloc(sizeof(arbore));
     aux->inf=n;
     printf("fiul stang al lui %d: ",n);
     aux->st=creare();
     printf("fiul drept al lui %d: ",n);
     aux->dr=creare();
     return aux;
  }
  else return NULL;
}

void RSD(arbore *a)
{
  if(a)
  {
    printf("%d ",a->inf);
    RSD(a->st);
    RSD(a->dr);
  }
}

void SRD(arbore *a)
{
  if(a)
  {
    SRD(a->st);
    printf("%d ",a->inf);
    SRD(a->dr);
  }
}

void SDR(arbore *a)
{
  if(a)
  {
    SDR(a->st);
    SDR(a->dr);
    printf("%d ",a->inf);
  }
}

int suma(arbore *a)
{
  if(a)
  {
    S+=a->inf;
    S=suma(a->st);
    S=suma(a->dr);
  }
return S;
}

int nr=0;

void frunza(arbore *a)
{
  if(a)
  {

    if(a->st==NULL && a->dr==NULL)
    printf("%d ",a->inf);
    frunza(a->st);
    frunza(a->dr);
  }
}

int noduri(arbore *a)
{
  if(a)
  {

    if(a->st==NULL && a->dr!=NULL || a->st!=NULL && a->dr==NULL)
    nr++;
    nr=noduri(a->st);
    nr=noduri(a->dr);
  }
return nr;
}

int x=3,y=6;
void interval(arbore *a)
{
  if(a)
  {
    if(a->inf>=x && a->inf<=y)
    printf("%d ",a->inf);
    interval(a->st);
    interval(a->dr);
  }
}

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

