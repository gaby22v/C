#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct lista
{
	int k;
	struct lista *next;
}*LIST;
typedef struct coada
{
	LIST front,rear;
}*QUEUE;
void newq(QUEUE q)
{
	q->front=q->rear=NULL;
}
int empty(QUEUE q)
{
	if((q->front==q->rear)&&(q->front=NULL))
		return 1;
	else
		return 0;
}
void addq(QUEUE q,int e)
{
	LIST aux;
	int f;
	if(empty(q))
		f=1;
	aux=(LIST)malloc(sizeof(LIST));
	aux->k=e;
	aux->next=NULL;
	if(f==1)
		q->front=q->rear=aux;
	else
	{
		q->rear->next=aux;
		q->rear=aux;
	}
}
QUEUE init(QUEUE q)
{
	char c,c1,ck,cc[5];
	int ci,k;
	printf("Initializare:");scanf("%c",&c);
	c1=getchar();
	if(c!='n')
		k=1;
	else
		k=-1;
	newq(q);
	while(k!=-1)
	{
		printf("\nO cheie:");scanf("%s",cc);
		c1=getchar();
		if(strcmp(cc,"n"))
			k=1;
		else
			k=-1;
		c1=atoi(cc);
		if(k!=-1)
			addq(q,ci);
	}
	return q;
}
void afisare(QUEUE q)
{
	LIST p;
	printf("\n\n Coada este:");
	p=q->front;
	if(empty(q))
		printf("\nvida");
	else
	{
		do
		{
			printf("%d",p->k);
			p=p->next;
		}while(p!=NULL);
	}
	printf("\n");
}
QUEUE reverse(QUEUE q)
{
	LIST p,s,f;
	p=NULL;
	while(q->front)
	{
		s=q->front->next;
		q->front->next=p;
		p=q->front;
		q->front=s;
	}
	for(f=p;f->next;f=f->next)
		q->rear=f;
	q->front=p;
	return q;
}
//suma tuturor elementelor
int suma(QUEUE q)
{
	int s=0;
	LIST p;
	for(p=q->front;p;p=p->next)
		s+=p->k;
	return s;
}
//suma elementelor negative
int suma_negative(QUEUE q)
{
	int s=0;
	LIST p;
	for(p=q->front;p;p=p->next)
		if(p->k<0)
			s+=p->k;
		return s;
}
//suma elemente pozitive
int suma_pozitive(QUEUE q)
{
	int s=0;
	LIST p;
	for(p=q->front;p;p=p->next)
		if(p->k>0)
			s+=p->k;
		return s;
}
//media tuturor elementelor
float media(QUEUE q)
{
	int nr=0,s=0;
	float m;
	LIST p;
	for(p=q->front;p;p=p->next)
	{
		nr++;
		s+=p->k;
	}
	if(nr)
		m=s/nr;
	return m;
}
//media elementelor pozitive
float media_pozitive(QUEUE q)
{
	int nr=0,s=0;
	float m;
	LIST p;
	for(p=q->front;p;p=p->next)
	 if(p->k>0)
	 {
		nr++;
		s+=p->k;
	 }
	if(nr)
		m=s/nr;
	return m;
}
//media elementelor negative
float media_negative(QUEUE q)
{
	int nr=0,s=0;
	float m;
	LIST p;
	for(p=q->front;p;p=p->next)
	if(p->k<0)
	{
		nr++;
		s+=p->k;
	}
	if(nr)
		m=s/nr;
	return m;
}
int main()
{
	QUEUE q;
	q=init(q);
	//afisare(q);
	//q=reverse(q);
	//afisare(q);
	printf("Suma este:%d",suma_negative(q));
	getch();
}