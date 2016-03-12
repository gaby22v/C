/* PROGRAM DE CONSTRUCTIE RSD A UNUI ARBORE SI DE AFISARE CA ARBORE */
#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct arbore
	{ int k;
	  struct arbore *ss,*sd;
		};
int hmax,depl_l=2,depl_c;  int col_init=40;

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

struct arbore *init_a_2()
{ struct arbore *aux;
  char nn,c1;
  int k;
  printf(" e nod NULL ? ");
  scanf("%c",&nn);c1=getchar();
  if ( (nn== 'n')||(nn== 'N'))
		{ printf(" cheie : ");
		  scanf("%d",&k);c1=getchar();
		  aux=(struct arbore *) malloc (sizeof (struct arbore ));
		  aux->k=k;
		  aux->ss=init_a_2();
		  aux->sd=init_a_2();
		  return(aux);
		}
  else  return(NULL);

}

PRSD( struct arbore *a,int col,int lin)
{ int harb;
 if(a)
	{harb=h(a);
	 gotoxy(col,lin);
	 printf(" %d \n",a->k);
	 if (harb==hmax) depl_c=hmax+3;
	 else depl_c=0;
	 PRSD(a->ss,col-1-depl_c,lin+1+depl_l);
	 PRSD(a->sd,col+1+depl_c,lin+1+depl_l);
	}
	return 1;
}

main()
{ struct arbore *a;   
	clrscr();
	a=init_a_2();
	clrscr();
	hmax=h(a);
 	PRSD(a,col_init,1);
	getch();
}



