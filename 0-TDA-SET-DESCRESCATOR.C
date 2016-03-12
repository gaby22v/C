/* PROGRAM CARE IMPLEMENTEAZA TDA MULTIME DESCRESCATOARE */
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#define N 100
typedef struct
{
	 int n;
	 int v[N];
}SET;

void listing(SET *s)
{
int i;
	 if (s->n)
			for(i=0;i<s->n;i++)
				printf("\n elem %d = %d",i,s->v[i]);
	 else
			printf("\n multimea este vida ");
}

SET *newset()
{
	 SET *s;
	 s=(SET *)malloc(sizeof(SET)); /* !!!!!! */
	 s->n=0;
	 return(s);
}

int min(SET *s)
{
	 if (s->n)
			return(s->v[(s->n)-1]);
	 else return(-32768);
}

SET *content(int e,SET	*s)
{
	 if(e<min(s))
			s->v[s->n++]=e;
	 return(s);
}

SET *insert(int e,SET *s)
{
	 int cn;
	 if(e<min(s))
			content(e,s);
	 else
			 {
				if (s->n)
				 {
					cn=s->n;
					while(cn&&s->v[cn-1]<e)
							 {
							 s->v[cn]=s->v[cn-1];
							 cn--;
							 }
					s->v[cn]=e;
					s->n++;
				 }
				else s->v[s->n++]=e;
			 }
	 return(s);
}

SET *init()
{
	 SET *s;
	 int e;
	 char ch;
	 s=newset();
	 printf("Doriti initializarea? ");
	 fflush(stdin);
	 scanf("%c",&ch);
	 while((ch=='D')||(ch=='d'))
		{
		 printf("Introduceti elem de inserat :  ");
		 fflush(stdin);
		 scanf("%d",&e);
		 if (!in(e,s))s=insert(e,s);
			 printf("Continuati ? ");
		 fflush(stdin);
		 scanf("%c",&ch);
		}

	 return(s);
}

 int in(int e,SET *s)
{
	 int temp=0,i;
	 for(i=0;i<s->n;i++)
			if(e==s->v[i])
				temp=1;
	 return(temp);
}

SET *delete(int e,SET *s)
{
	 int i,p;
	 if(e<min(s))
			printf("eroare");
	 else
			if(e==min(s))
				(s->n)--;
			else
				if(in(e,s))
				 {
					 for (i=0;i<s->n;i++)
					 if(e==s->v[i])
							p=i;
					 for(i=p;i<s->n-1;i++)
					 s->v[i]=s->v[i+1];
					 (s->n)--;
					 printf(" \n n=%d \n",s->n);
				 }
				else
						printf("\n Elementul nu se afla in multime. ");
	 return(s);
}

SET *intersectie(SET *s1,SET *s2)
{
	 SET *s3;
	 int i,j;
	 s3=newset();
	 for(i=0;i<s1->n;i++)
		 for(j=0;j<s2->n;j++)
				{
				 if(s1->v[i]==s2->v[j])
					 {
						 s3->v[s3->n]=s1->v[i];
						 s3->n++;
					 }
				}
	 return(s3);
}

SET *reuniune (SET *s1,SET *s2)
{
	 SET *s4;
	 int i,j,aux,n;
	 s4=newset();
	 s4->n=s1->n;
	 s4=s1;
	 for(i=0;i<s2->n;i++)
			 if(!in(s2->v[i],s1))
					insert(s2->v[i],s4);
	 return(s4);
}

void main()

{
		int i,e,p,n;
		SET *s,*s1,*s2,*s3,*s4;
		clrscr();
		printf("\n ACESTA ESTE UN PROGRAM CARE ILUSTREAZA FOLOSIREA TDA SET");
		printf("\n NUMAI CA elementele sint ordonate DESCRESCATOR\n ");
		printf(" Urmeaza initializarea unei multimi \n ");
		s=init();
		printf("\n Aceasta este multimea pe care ati initializat-o: ");
		listing(s);
		printf(" \n\n  In continuare se testeaza operatorul de stergere \n ");
		printf("\n Introduceti elementul care doriti sa fie sters : ");
		scanf("%d",&e);
		s=delete(e,s);
		printf("\n Aceasta este multimea rezultat : \n");
		listing(s);
		printf(" \n In continuare se testeaza intersectia si reuniunea : \n");
		printf("\n Introduceti elementele primei multimi : \n" );
		s1=init();
		printf("\n Introduceti elementele celei de a doua multimi : \n");
		s2=init();
		printf("\n Aceasta este prima multime :");
		listing(s1);
		printf("\n Aceasta este cea de a doua multime :");
		listing(s2);
		getch();
		s3=intersectie (s1,s2);
		printf("\n Aceasta este intersectia :");
		listing(s3);
		getch();
		s4=reuniune(s1,s2);
		printf("\n Aceasta este reuniunea : ");
		listing(s4);
		getch();
}









