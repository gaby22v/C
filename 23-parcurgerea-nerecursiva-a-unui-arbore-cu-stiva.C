#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct arbore
	{ int k;
		struct arbore *ss,*sd;
		};

struct stack
	{struct arbore *a;
	 struct stack *next;
	 }*s;

RSD( struct arbore *a)
{if(a)
	{
	 printf("  %d  ",a->k);
	 RSD(a->ss);
	 RSD(a->sd);
	}
	return 1;
}

afisare_stiva(struct stack *s)
{ struct stack *stv; /* !! pentru parcurgere nedistructiva a stivei */
	stv=s;
	while(stv)
	 { printf(" \n un sarb. din stiva :  ");
		 RSD(stv->a);
		 stv=stv->next;
		 }
	 printf(" NULL stiva\n ");
	 return(1);
}

struct stack *news()
{
 return(NULL);
};

struct stack *push(struct stack *s,struct arbore *a)
{ struct stack *stv;
	stv=(struct stack *)malloc(sizeof(struct stack));
	stv->a=a;
	stv->next=s;
	return(stv);
}


struct arbore *top(struct stack *s)
{ struct arbore *arb;
	if (s)
	{
	arb=s->a;
	return(arb);
	}
	else return(NULL);
}

struct stack *pop(struct stack *s)
{ struct stack *p;
	/*pentru free : */
	if(s)
	{p=s->next; free(s); /* noul s va fi p*/
	return(p);}
	else return(NULL);
}


emptys(struct stack *s)
{ if (!s) return(1);
	else return(0);
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


NER_RSD(struct arbore *a)
{
	s=news(); /* initializare stiva vida */
	while(a || ! emptys(s))
		{ while(a)
			 { printf("%d",a->k);
				 s=push(s,a->sd);
				 a=a->ss;
			 }
			do
				{
				a=top(s);
				s=pop(s);
				}
			while(!a && !emptys(s));
	}
		return(1);
	}





main()

{ struct arbore *a;
	clrscr();
	a=init_a_2();
	printf("arbore :");
	RSD(a);
	printf("\n \n INTRU IN NER_RSD\n ");
	NER_RSD(a);
	getch();
}
