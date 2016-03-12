/* PROGRAM CARE IMPLEMENTEAZA JOCUL ACELA IN CARE COPII STAU IN CERC
SI NUMARA, CU UN ANUMIT PAS, COPILUL NUMARAT URMIND SA IASA DIN JOC 
PROGRAMUL VA AFISA ORDINEA DE IESIRE A COPIILOR DIN JOC */
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct lista
	{int k;
	 struct lista *next;
	 };

struct lista *cons(int k,struct lista *l)
{ struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
  aux->k=k; aux->next=l;
  return(aux);
}

struct lista *init_lc(int n,struct lista *l)
{struct lista *p;
 int i;
 l=NULL;
 for(i=n;i>0;i--)
	{l=cons(i,l);
	 if(i==n)p=l;
	 }
 p->next=l;
 return(l);
 }

main()
{ int n,k,m,i;
  struct lista *l;
  clrscr();
  printf(" NUMARUL DE COPII : ");scanf("%d",&n);
	l=init_lc(n,l);
	printf(" INCEP SA NUMAR DE LA COPILUL : ");scanf("%d",&k);
  printf(" copiii vor  iesi din cit in cit : ");scanf("%d",&m);
	if(m==0)printf("NU EXISTA JOC !\n");
	else
	if ((k==0) || (m==0)) printf(" AIUREA !\n");
	else
		{
		 for(i=1;i<=k-1;i++)l=l->next;
		 while(n)
			{ if (m==1) 
				{ printf("%d iese din cerc \n",l->k);
				  l=l->next;
				}
			  else
				{ for (i=1;i<=m-2;i++) l=l->next;
				  printf("%d iese din cerc \n",l->next->k);
				  l=l->next=l->next->next;
				}
			  n--;
			}
		 }
		 getch();
  }
