/* PROGRAM CARE INITIALIZEAZA SI AFISEAZA O LISTA SIMPLU INLANTUITA
  ordonata crescator / descrescator (vezi comment)
*/


#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <values.h>
#include <stdlib.h>
#include <string.h>

struct lista
{ int k;
  struct lista *next;
};

struct lista *ins(struct lista *l,int x,int poz);
void tipar(struct lista *l);

struct lista *init_l()
{
  char c,ck,cc[5];   int ci,k;
  struct lista *l,*p;
  printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [y/n] [n final]");
  scanf("%c",&c); getchar();
  if (c!='n')k=1;
  else k=-1;
  l=NULL;
  int i=1;
  while (k!=-1)
  {
    printf(" \n O CHEIE : ");
    scanf("%s",cc);getchar();
    if (strcmp(cc,"n"))k=1;
    else k=-1;
    ci=atoi(cc); /*	ci=convert_sir_la_intreg(cc); */
    if (k!=-1)
      {
      for (p=l;p->next->k<ci&&p->next!=NULL;p=p->next)
	i++;
	l=ins(l,ci,i+1);
	tipar(l);
      }
  }
return(l);
}

struct lista *ins(struct lista *l,int x,int poz)
{  struct lista *aux,*q,*p;
  int i=1;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=x;
  poz=1;
  for (p=l;p;p=p->next)
    if (x>p->k)  //x < p->k pentru a crea lista ordonata descrescator
      poz++;
  if (poz>1)
    {
    for (p=l;p&&i<poz-1;p=p->next)
      i++;
    q=p->next;
    aux->next=q;
    p->next=aux;
    }
  else
  {
  aux->next=l;
  l=aux;
  }
return l;
}

void tipar(struct lista *l)
{ struct lista *p;
  for(p=l;p;p=p->next) printf("%d->",p->k);
  printf("NULL\n");
}

void main()
{ struct lista*l;
  clrscr();
  l=init_l();
  printf("\n\nlista deja introdusa este :\n\n");
  tipar(l);
  getch();
}