/*
PROGRAMUL CREEAZA UN ARBORE BINAR, IL PARCURGE RSD,
si copiaza elementele in Lista Simplu Inlantuita
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct lista
{
int k;
  struct lista *next;
} list;

typedef struct nod
{ int inf;
  struct nod *st,*dr;
} arbore;

list *q;
struct lista *add(int k,struct lista *l);
void print(struct lista *l);

void print(struct lista *l)
{
  struct lista *p;
  for (p=l;p;p=p->next)
    printf("%d->",p->k);
  printf("NULL\n");
}

struct lista *add(int k,struct lista *l)
{
struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=k;
  aux->next=l;
return(aux);
}

arbore *creare() //CREAZA ARBORELE
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

list *inserare (list *l,int x)
{ list *aux;
  aux=(list *)malloc(sizeof(list));
  aux->k=x;
  aux->next=l;
  l=aux;
 return l;
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

list *ALSI(arbore *a)
{
  if(a)
  {
    q=inserare(q,a->inf);
    q=ALSI(a->st);
    q=ALSI(a->dr);
  }
return q;
}

void main()
{
 arbore *a;
 clrscr();
 printf("Se creeaza arborele\nRadacina: ");
 a=creare();
 getch();
 printf("\nArborele RSD este: ");
 RSD(a);
 q=NULL;
 q=ALSI(a);
 printf("\nLSI: ");
 print(q);
 getch();
}