//1. stabileste daca un arbore este perfect echilibrat,echilibrat sau neechilibrat
//perfect echilibrat: |h(as)-h(ad)|=0
//echilibrat: |h(as)-h(ad)|<=1

//2. afiseaza arborele ca arbore
//3. afiseaza elementele de pe un nivel dat

#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <math.h>

struct nod
	{ int k;
		struct nod *ss,*sd;
		};

int nr=0,flag=0;
int hmax,depl_l=2,depl_c;
int col_init=40;

struct nod *init_a_2()
{ struct nod *aux;
	char nn,c1;
	int k;
	printf(" e nod NULL ? ");
	scanf("%c",&nn);c1=getchar();
	if ( (nn== 'n')||(nn== 'N'))
		{ printf(" cheie : ");
			scanf("%d",&k);c1=getchar();
			aux=(struct nod *) malloc (sizeof (struct nod ));
			aux->k=k;
			printf("\n Creez fiul stang pentru nodul %i: ",aux->k);
			aux->ss=init_a_2();
			printf("\n Creez fiul drept pentru nodul %i: ",aux->k);
			aux->sd=init_a_2();
			return(aux);
		}
	else  return(NULL);

}

void RSD( struct nod *a)	/* in */
{if(a)
	{
	 printf("%d \n",a->k);
	 RSD(a->ss);
	 RSD(a->sd);
	}
}

void SRD( struct nod *a)
{if(a)
	{SRD(a->ss);
	 printf("%d \n",a->k);
	 SRD(a->sd);
	}
}

void SDR( struct nod *a)
{if(a)
	{SDR(a->ss);
	 SDR(a->sd);
	 printf("%d \n",a->k);
	}
}

int max(int a, int b)
{
 return(a>=b?a:b);
}

int h_arb(struct nod *a)
{
 int h1,h2;
 if(!a) return 0;
 else
 {
	h1=h_arb(a->ss);
	h2=h_arb(a->sd);
	return max(h1,h2)+1;
 }
}

//afisarea unui arbore ca arbore
void PRSD(struct nod *a, int col, int lin)
{
int harb;
 if(a)
 {
  harb=h_arb(a);
  gotoxy(col,lin);
  printf("%d\n",a->k);
  if(harb==hmax)
	depl_c=hmax+3;
  else
	depl_c=0;
  PRSD(a->ss,col-1-depl_c,lin+1+depl_l);
  PRSD(a->sd,col+1+depl_c,lin+1+depl_l);
 }
}

int numar(struct nod *a)
{
 if(a)
 {
	nr++;
	numar(a->ss);
	numar(a->sd);
  }
 return nr;
}

/*
//carte Doina Rancea
int test(struct nod *a)
{
 if(a)
 {
	if(abs(numar(a->ss)-numar(a->sd))>1)
	{
	flag=1;
	}
	test(a->ss);
	test(a->sd);
  }
  return flag;
}

*/

int p_ech(struct nod *a)
{
int aux=0,ok=0;
 if(a)
 {
	aux=abs(h_arb(a->ss)-h_arb(a->sd));
	if(aux)
	ok=1;
	p_ech(a->ss);
	p_ech(a->sd);
 }
 return ok;
}

int ech(struct nod *a)
{
int aux=0,ok=0;
 if(a)
 {
	aux=abs(h_arb(a->ss)-h_arb(a->sd));
	if(aux>1)
	ok=1;
	ech(a->ss);
	ech(a->sd);
 }
 return ok;
}

void afis_niv(struct nod *a, int niv)
{
 if(a)
 {
	if(niv==0)
	printf("%5d",a->k);
	else
	{
	 afis_niv(a->ss,niv-1);
	 afis_niv(a->sd,niv-1);
	}
 }
}


void afis(struct nod *a)
{
 if(a)
	printf("%3d",a->k);
	if(a->sd)
	{
	printf("%3d",a->sd->k);
	afis(a->sd->ss);
	}
}


void main()
{ struct nod *a;
  int g,zz,niv;
	clrscr();
	a=init_a_2();
//cele 3 parcurgeri
	printf("\n Parcurgere RSD:\n");
	RSD(a);
	printf("\n Parcurgere SRD:\n");
	SRD(a);
	printf("\n Parcurgere SDR:\n");
	SDR(a);
//afisarea unui arbore ca arbore
	clrscr();
	hmax=h_arb(a);
	PRSD(a,col_init,1);

//numara elementele arborelui
	numar(a);
	printf("\n\n\nNumarul elementelor este: %d",nr);
/*
//testeaza daca arborele este perfect echilibrat dupa Doina Rancea
//conditia este ca diferenta dintre numarul varfurilor subarborilor oricarui varf din arbore sa fie cel mult 1
	if(test(a)==0)
	printf("\n arbore perfect echilibrat - DR");
	else
	printf("\n nu e perfect echilibrat - DR");
*/
	//testeaza perfect echilibrat, echilibrat, neechilibrat Monica Vladoiu
	zz=p_ech(a);
	if(zz)
	 printf("\nArbore nu perfect echilibrat - MV");
	else
	 printf("\nArbore perfect echilibrat - MV");
	if(ech(a))
	 printf("\nArbore neechilibrat - MV");
	else
	 printf("\nArbore echilibrat - MV");
	printf("\n Inaltimea arborelui este:%d",h_arb(a));
//afisarea informatiilor de pe un nivel dat
	printf("\n Informatiile de pe nivelul ");
	scanf("%d",&niv);
	afis_niv(a,niv);
//afiseaza informatiile ...
	printf("\nafiseaza informatiile de pe calea din mijloc (daca exista) a arborelui/zig-zag\n");
	afis(a);

	getch();
}



