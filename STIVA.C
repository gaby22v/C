#include <stdio.h>
#include <alloc.h>
struct arbore
	{ int k;
		struct arbore *ss,*sd;
		};

struct stack
	{struct arbore *a;
	 struct stack *next;
	 };

RSD( struct arbore *a)
{if(a)
	{printf("  %d  ",a->k);
	 RSD(a->ss);
	 RSD(a->sd);
	}
	{printf("\n");}
	return 1;
}

afisare_stiva(struct stack *s)
{ struct stack *stv; /* !! pentru parcurgere nedistructiva a stivei */
	stv=s;
	printf("  stiva curenta :  ");
	while(stv)
	 {
		 RSD(stv->a);
		 stv=stv->next;
		 }
	 printf(" NULL stiva\n\n ");
	 return(1);
}

struct stack *news()
{
 return(NULL);
}

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
	return(arb);}
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

