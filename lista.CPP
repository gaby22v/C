/* PROGRAM CARE INITIALIZEAZA SI AFISEAZA O LISTA SIMPLU INLANTUITA
  concatenare, maxim, medie, suma nr. poz, suma nr negative, afisare, creare
  creare lista fara repetari
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

int gasit(struct lista*l,int x);

struct lista *adaugare(int k,struct lista *l)
{ struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=k;
  aux->next=l;
return(aux);
}

 struct lista *init_l()
{
  char c,ck,cc[5];   int ci,k;
  struct lista *l;
  printf(" DORITI SA INCEPETI INITIALIZAREA LISTEI ? [y/n] [n final]");
  scanf("%c",&c); getchar();
  if (c!='n')k=1;
  else k=-1;
  l=NULL;
  while (k!=-1)
  {
    printf(" \n O CHEIE : ");
    scanf("%s",cc);getchar();
    if (strcmp(cc,"n"))k=1;
    else k=-1;
    ci=atoi(cc); /*	ci=convert_sir_la_intreg(cc); */
    if (k!=-1)
     // if(gasit(l,ci)==0)
      l=adaugare(ci,l);
  }
return(l);
}


void tipar(struct lista *l)
{ struct lista *p;
  for(p=l;p;p=p->next) printf("%d->",p->k);
  printf("NULL\n");
}

int sp(struct lista *l)
{ int s=0;
  struct lista *p;
  for(p=l;p;p=p->next)
    if (p->k>0)
      s+=p->k;
return s;
}

int sn(struct lista *l)
{ int s=0;
  struct lista *p;
  for(p=l;p;p=p->next)
    if (p->k<0)
      s+=p->k;
return s;
}

void interval(struct lista *l)
{ int a,b,aux;
  struct lista *p;
  printf("/nIntervalul a,b: /n");
  scanf("%d",&a);scanf("%d",&b);
  if (b<a)
    {
    aux=a;
    a=b;
    b=aux;
    }
  for(p=l;p;p=p->next)
    if ((p->k>=a) && (p->k<=b))
      printf(" %d ",p->k);
  printf("NULL\n");
}

float media(struct lista *l)
{ float s=0,nr=0,me;
  struct lista *p;
  for (p=l;p;p=p->next)
    {
    s+=p->k;
    nr++;
    }
  if (nr)
  me=s/nr;
return me;
}

int maxim(struct lista *l)
{ int max=-MAXINT;
  struct lista *p;
    for (p=l;p;p=p->next)
      if (p->k>=max)
	max=p->k;
return max;
}

struct lista *conc(struct lista *l,struct lista *m)
{
  struct lista *p;
  for (p=l;p->next;p=p->next);
    p->next=m;
return l;
}

struct lista *reverse(struct lista *l)
{
  struct lista *p,*s;
  p=NULL;
  while(l)
  {
    s=l->next;
    l->next=p;
    p=l;
    l=s;
  }
return p;
}


int gasit(struct lista *l,int x)
{ struct lista *p;
  int c;
for (p=l;p;p=p->next)
  if (x==p->k)
    return 1;
return 0;
}

struct lista *insinterior(struct lista *l,int x,int poz)
{  struct lista *aux,*q,*p;
   int i=1;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=x;
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

void main()
{ struct lista*l;
  clrscr();
  l=init_l();
  printf("\n\nlista deja introdusa este :\n\n");
  tipar(l);
  getch();
/*
  printf("\nSuma= %d\n",sp(l));
  getch();
  printf("\nSuma N= %d\n",sn(l));
  getch();
  interval(l);
  getch();
  printf("\nMedia: %4.2f\n",media(l));
  getch();
  printf("\nMaxim: %d\n",maxim(l));
  getch();
  printf("\nLista 2\n");
  struct lista *m;
  m=init_l();
  tipar(m);
  l=conc(l,m);
  getch();
  printf("\n");
  tipar(l);
  getch();
  l=reverse(l);
  tipar(l);
  getch();

*/
  int x,poz;
  printf("X= ");scanf("%d",&x);
  printf("Pozitia: ");scanf("%d",&poz);
  l=insinterior(l,x,poz);
  tipar(l);
  getch();
}

