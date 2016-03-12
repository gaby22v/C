#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct arbore
	{ int k;
	  struct arbore *ss,*sd;
		};


struct arbore *init_a_2()
{ struct arbore *aux;
  char nn,c1;
  int k;
  printf(" e nod NULL ? ");
  scanf("%c",&nn);c1=getchar();
  if ( (nn== 'n')||(nn== 'N'))
		  {
		  aux->ss=init_a_2();
		  aux->sd=init_a_2();

		printf(" cheie : ");
		  scanf("%d",&k);c1=getchar();
		  aux=(struct arbore *) malloc (sizeof (struct arbore ));

		  aux->k=k;
		  return(aux);
		}
  else  return(NULL);

}

SDR( struct arbore *a)	/*post*/
{if(a)
	{
	 SDR(a->ss);
	 SDR(a->sd);
	 printf("%d \n",a->k);
	}
	return 1;
}

/*main()
{ struct arbore *a;
	clrscr();
	a=init_a_2();
	RSD(a);
	getch();
} */



