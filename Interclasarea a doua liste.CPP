/* 
Interclasarea
*/

#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <values.h>
#include <stdlib.h>
#include <string.h>

struct lista
{
int k;
  struct lista *next;
};

struct lista *add(int k,struct lista *l);
void print(struct lista *l);
struct lista *interclass(struct lista *x,struct lista *y);

struct lista *init()
{
char c,cc[5];
int ci,k;
// int i=1;
struct lista *l;
  printf("Start? [y/n]");
  scanf("%c",&c);
  getchar();
  if (c!='n')
    k=1;
  else
    k=-1;
  l=NULL;
  while (k!=-1)
  {
    printf("\n Key: ");
    scanf("%s",cc);
    getchar();
    if (strcmp(cc,"n"))
      k=1;
    else
      k=-1;
    ci=atoi(cc);  /* ci=convert sir la numar intreg */
    if (k!=-1)
//    {
//       for (p=l;p->next->k<ci&&p->next!=NULL;p=p->next)
//         i++;
	 l=add(ci,l);
//    }
  }
return l;
}

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

struct lista *interclass(struct lista *x,struct lista *y)
{
  struct lista *p,*q,*aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
  p=x;
  q=y;
  for (p=x;p;p=p->next)
    for (q=y;p;p=p->next)
      if (p->k>q->k)
      {
	aux=p;
	p=q;
	q=aux;
      }

return aux;
}

void main()
{ clrscr();
  struct lista*l,*q,*A;
  l=init();
  q=init();
  printf("\n\nThe list(s):\n\n");
  print(l);
  print(q);
  getch();
  A=interclass(l,q);
  print(A);
  getch();
}