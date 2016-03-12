#include<stdio.h>
#include<conio.h>
#include<alloc.h>

typedef struct celula_lista
	{ int k;
		struct celula_lista *next;
	} LIST;
typedef struct coada
	{ LIST *front,*rear;
	} QUEUE;

QUEUE *newq(QUEUE *q)
	{
  q=(QUEUE *)malloc(sizeof(QUEUE));
	q->front=q->rear=NULL;
	return(q);
	}

int emptyq(QUEUE *q)
	{if((q->front==q->rear)&&(q->front==NULL))
		return(1);
	 else return(0);
	 }

QUEUE *addq(QUEUE *q,int e)
	{LIST *aux;
	 aux=(LIST *)malloc(sizeof(LIST));
	 aux->k=e; aux->next=NULL;
	 if ((q->front==NULL)&&(q->rear==NULL)) /* e primul element */
			q->front=q->rear=aux;
	 else
			{ q->rear->next=aux;
			 q->rear=aux;
			}
	 return(q);
	 }

QUEUE *initializare_coada_cu_header()
{LIST *aux;
 char c,c1; int k;
 QUEUE *q;
 q=newq(q); /* aux=NULL;q->front=q->rear=aux;*/
 printf(" DORITI SA INCEPETI INITIALIZAREA COZII ? [D/N] ");
 scanf("%c",&c);c1=getchar();
 while ((c=='d') || (c=='D'))
	 {printf(" \n INTRODUCETI O CHEIE : "); scanf("%d",&k);c1=getchar();
		q=addq(q,k);
		printf("\n CONTINUATI ? ");
		scanf("%c",&c);c1=getchar();
	 }
	 return(q);
 }


void printq(QUEUE *q)
{ LIST *p;
	p=q->front;
	if(emptyq(q)) printf(" coada vida \n ");
	else
		{ do
				{ printf("%d ",p->k);
					p=p->next;
				}
			while (p!=NULL);
		}
	printf(" \n ");
}

QUEUE *remq(QUEUE *q)
	{LIST *out;
	 if(!emptyq(q))
		{out=q->front;
		 if (q->front->next)
					q->front=q->front->next;
		 else q->front=q->rear=NULL;
		 free(out);
     return(q);
		 }
	 else
		 {printf("\n Coada era vida !");
			return NULL;
			}
	 getch();
	 }

int frontq(QUEUE *q)
	{if(!emptyq(q))
		return(q->front->k);
	 else
		{printf("\n Coada este vida."); return(-1);}
	 }

/*main()
 {QUEUE *q;
	clrscr();
	q=initializare_coada_cu_header();
	printf("\n\nlista deja introdusa este :\n\n");
	printq(q);
	printf("car-ul listei este %d \n",frontq(q));
	while (q) {q=remq(q);printf("coada dupa remq este:"); printq(q);}
	getch();
	 }*/
