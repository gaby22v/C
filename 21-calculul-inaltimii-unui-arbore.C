/* PROGRAM CARE DETERMINA INALTIMEA UNUI ARBORE BINAR */
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include "arb_rete.c"

int max (int a,int b)
{return(a>=b?a:b);
}
int h(struct arbore* a)
{ int h1,h2;
  if(!a) return(0);
  else
	{h1=h(a->ss); h2=h(a->sd);
	 return(max(h1,h2)+1);
	 }
  }

 void main()
{ struct arbore *a;
   clrscr();
   printf("incepeti initializarea arborelui : \n ");
   a=init_a_2();
   printf(" inaltimea arborelui = %d ",h(a));
   getch();
 }