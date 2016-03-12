/* PROGRAM CARE INITIALIZEAZA  SI AFISEAZA UN VECTOR */
/* DUPA CARE, TESTEAZA EXISTENTA UNUI ELEMENT IN EL */
#include <stdio.h>
#include <conio.h>
#include <alloc.h>

typedef int vector[20];
int n=0;

init_v(vector v)
{ char c,c1;
	int e;
	printf(" doriti initializarea vectorului ? ");
	scanf("%c",&c);c1=getchar();
	while((c=='d')||(c=='D'))
		{	printf(" introduceti un element ");
			scanf("%d",&e);c1=getchar();
			v[n]=e; n=n+1; /* add(v,e) */
			printf(" continuati? ");
			scanf("%c",&c);c1=getchar();
		}
}

tipar(vector v)
{ 	int i;
	for(i=0;i<n;i++)
		printf(" %d",v[i]);
}

int member(vector v, int e)
{	int i=0,f=0;
	while(!f && i<n)
			if (v[i]==e) f=1;
			else i++;
	return f;
}

main()
{ vector v;
	int e;
	char c1;
	clrscr();
	init_v(v);
	printf("\nvectorul este :\n");
	tipar(v);
	printf("\nin continuare se testeaza existenta lui e in vectorul v \n");
	printf(" introduceti o valoare e: ");
	scanf("%d",&e);c1=getchar();
	if (member(v,e)) printf("elementul %d exista in vector ",e);
	else printf("elementul %d nu exista in vector ",e);
	getch();
	}

