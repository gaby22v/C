#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <string.h>
#include <stdlib.h>
struct lista
	{int k;
	 struct lista *next,*prev;
	 };

/*struct lista *cons_2inl(int k,struct lista *l)
{ struct lista *aux;
  aux=(struct lista *)malloc(sizeof(struct lista));
	aux->k=k; aux->next=l;
	aux->prev=NULL; l->prev=aux;
	return(aux);
} */


struct lista *cons_c_2inl(int k,struct lista *l)
{ struct lista *aux,*p;
	aux=(struct lista *)malloc(sizeof(struct lista)); //se aloca spatiu pentru elementul ce va fi introdus in lista
	aux->k=k; //se introduce informatia in elementul nou
	p=l;//se lucreaza cu o lista auxiliara p
	while(p->next!=l)p=p->next; // cat timp nu m-am intors la primul element din lista - acesta fiind l, parcurg lista
	p->next=aux; //se refac legaturile, il adaug pe aux la sfarsitul listei
	aux->prev=p;
	if (l){aux->next=l; l->prev=aux;} //daca l are elemente fac legaturile dintre aux si l, pentru a face lista circulara pe amele sensuri
	else {aux->next=aux; //daca l nu are nici un elemnet, inseamna ca aux este primul element din lista si se fac legaturile corespunzator
		aux->prev=aux;}
	return(aux);
}

void tipar_c_2inl(struct lista *l)
 { struct lista *p;
  if(l)
  {
   p=l; //lucrez cu lista auxiliara p
   do{
      printf("%d",p->k);
      p=p->next;
      }while(p!=l); //cat timp nu am ajuns la primul element
   }
}



struct lista *init_2inl(struct lista *l)
 {
	int ci,k;
	char c,c1,ck,cc[5];
	l=NULL;
 printf(" \n LISTA VA FI ORDONATA CRESCATOR DE LA INTRODUCERE ! \n");
 printf("doriti sa incepeti initializarea listei [n pentru terminare]?");
 scanf("%c",&c);c1=getchar();
 if (c!='n')k=1; else k=-1;
 while (k!=-1)
	{
		printf(" o cheie : ");
		scanf("%s",cc);c1=getchar();
		if (strcmp(cc,"n"))k=1;
		else k=-1;
		ci=atoi(cc); //functie care transforma un caracter in numeric
		if(k!=-1)l=cons_c_2inl(ci,l);
	}
	 return(l);
 }

 void media_aritmetica (struct lista *l)
 {
	struct lista *p;
	int s,nr;
	float m;
	s=0;
	nr=0;

  if(l)
  {
   p=l; //lucrez cu lista auxiliara p
   do{
   s=s+p->k;
   nr=nr+1;
      p=p->next;
      }while(p!=l);
   m=(float)s/nr;
   printf ("\nm=%.2f",m);
   }
   else  printf("lista este vida");
//   return(m);
   }

	main()
	{
	struct lista *l;
		int k;
		clrscr();
		l=init_2inl(l);
		printf(" \n \n LISTA INITIALA : ");
		tipar_c_2inl(l);
		media_aritmetica(l);

		getch();
		}

