/* Trecerea elementelor unei liste simplu inlantuite 
   intr-un arbore binar de cautare*/

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

typedef struct nod
	{ int k;
	  struct nod *ss,*sd;
	} arbore;

typedef struct lista
	{int k;
	 struct lista *next;
	}LS;

/*Creeaza o lista simpla.*/
LS *creare(LS *l)
{
 LS *aux;
 int k;
 char c,c1;
 l=NULL;
 printf("Doriti sa incepeti?[D/N]");
 scanf("%c",&c);c1=getchar();
 while((c=='d')||(c=='D'))
	{aux=(LS *)malloc(sizeof(LS));
	 printf("Introduceti cheia:");
	 scanf("%d",&aux->k);
	 c1=getchar();
	 aux->next=l;
	 l=aux;
	 printf("Continuati:");
	 scanf("%c",&c);
	 c1=getchar();
	}
 return(l);
}



/*Afiseaza o lista simpla.*/
void afisare (LS *l)
{
 LS *p;
 for(p=l;p;p=p->next)
	printf("%d->",p->k);
 printf("NULL\n");
}


/*Inserarea unui nod cu cheia key intr-un arbore binar de cautare.*/

arbore *inserare_rec(arbore *rad,int key)
{
  arbore *p;
  if (rad==NULL){

		  p=(arbore *)malloc(sizeof(arbore));
		  p->k=key;
		  p->ss=NULL;p->sd=NULL;
		  return p;
		    }
  else {
	     if(key < rad->k) rad->ss=inserare_rec(rad->ss,key);
	     else {
		       if(key > rad->k) rad->sd=inserare_rec(rad->sd,key);
		       else { /* cheie dubla */
			 printf("\n Cheia %d este cheie dubla!\n",key);
			  }
		    }
	 };
    return rad;
}


/*Afisarea unui arbore binar.*/
void RSD(arbore *a)
{if(a)
	{printf("%d \n",a->k);
	 RSD(a->ss);
	 RSD(a->sd);
	}
}

void main()
{       arbore *a=NULL;
	LS *p;
	clrscr();
	LS *l=NULL;
	/* Crearea si afisarea listei */
	l=creare(l);
	afisare(l);
	/* Trecerea cheilor din lista simplu inlantuita in arbore binar
	  de cautare */
	for(p=l;p;p=p->next)
	   a=inserare_rec(a,p->k);
	RSD(a);  /*parcurgerea arborelui binar de cautare obtinut */
	getch();
}