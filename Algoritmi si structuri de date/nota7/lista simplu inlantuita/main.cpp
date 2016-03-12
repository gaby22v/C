#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct lista
{
	int k;
	struct lista *next;
};
struct lista *adaugare(int k,struct lista *l)
{
	struct lista *aux;
	aux=(struct lista*)malloc(sizeof(struct lista));
	aux->k=k;
	aux->next=l;
	return aux;
}
struct lista *init()
{
	char c,ck,cc[5];
	int ci,k;
	struct lista *l;
	printf("Initializare:");scanf("%c",&c);
	getchar();
	if(c!='n')
		k=1;
	else
		k=-1;
	l=NULL;
	while(k!=-1)
	{
		printf("\nO cheie:");scanf("%s",&cc);
		getchar();
		if(strcmp(cc,"n"))
			k=1;
			else
				k=-1;
			ci=atoi(cc);
			if(k!=-1)
				l=adaugare(ci,l);
	}
	return l;
}
//pe loc
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
	//prin copiere
	struct lista *reverse_copiere(struct lista *l)
	{
		struct lista *cl=NULL;
		while(l)
		{
			cl=adaugare(l->k,cl);
			l=l->next;
		}
		return cl;
	}
	int afisare(struct lista *l)
{
	struct lista *p;
	for(p=l;p;p=p->next)
		printf("%d->",p->k);
	printf("NULL\n");
}
//suma elemente oarecare
int suma(struct lista *l)
{
	int s=0;
	struct lista *p;
	for(p=l;p;p=p->next)
		s+=p->k;
	return s;
}
//suma elemente negative
int suma_negative(struct lista *l)
{
	int s=0;
	struct lista *p;
	for(p=l;p;p=p->next)
		if(p->k<0)
			s+=p->k;
		return s;
}
//suma elemente pozitive
int suma_pozitive(struct lista *l)
{
	int s=0;
	struct lista *p;
	for(p=l;p;p=p->next)
		if(p->k>0)
			s+=p->k;
		return s;
}
//media tuturor elementelor
float media(struct lista *l)
{
	int s=0,nr=0;
	float m;
  struct lista *p;
  for (p=l;p;p=p->next)
    {
    s+=p->k;
    nr++;
    }
  if (nr)
  m=s/nr;
return m;
}
//media elementelor pozitive
float media_pozitive(struct lista *l)
{
	int s=0,nr=0;
	float m;
	struct lista *p;
	for(p=l;p;p=p->next)
	{
		if(p->k>0)
		{
			s+=p->k;
			nr++;
		}
	}
	if(nr)
		m=s/nr;
	return m;
}
//media elementelor negative
float media_negative(struct lista *l)
{
	int s=0,nr=0;
	float m;
	struct lista *p;
	for(p=l;p;p=p->next)
	{
		if(p->k<0)
		{
			s+=p->k;
			nr++;
		}
	}
	if(nr)
		m=s/nr;
	return m;
}
	int main()
	{
		struct lista *l;
		l=init();
		//afisare(l);
		//printf("\nReverse:");
		//l=reverse_copiere(l);
		//afisare(l);
		//printf("Suma este = %d",suma(l));
		printf("Media este:%f",media_pozitive(l));
		getch();
	}
		