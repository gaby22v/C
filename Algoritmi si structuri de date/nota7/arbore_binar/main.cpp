#include<conio.h>
#include<stdio.h>
#include<alloc.h>
/*s,n,p se refera la suma pozitive,suma negative si suma oarecare
nr-la numarul de noduri,iar b este un vector in care se afiseaza caile unui arbore binar*/
int j=0,k=0,i=0,n=0,s=0,p=0,nr=0,b[1000],max=-32800;
/*structura arbore
inf-informatia
st si dr se refera la nodurile din partea stanga respectiv partea dreapta */
typedef struct nod
{
	int inf;
	struct nod *st,*dr;
}arbore;
//aceasta functie afiseaza elementele unui tablou unidimensional
void afisare_tablou(int b[],int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		printf("%i ",b[i]);
	}
	printf("\n");
}
/*functia determina toate caile din arbore
pe fiecare pozitie a vectorului se pune un element din arbore,iar marimea vectorului creste
functia se apeleaza recursiv pentru sub-arborele stang si sub-arborele drept
parcurgerea este srd
*/
void cai(arbore *a,int vector[],int lungime)
{
	if(a==NULL)
		printf("vid");
	vector[lungime]=a->inf;
	lungime++;
	if(a->st==NULL&&a->dr==NULL)
	{
		afisare_tablou(vector,lungime);
	}
	else
	{
		cai(a->st,vector,lungime);
		cai(a->dr,vector,lungime);
	}
}
//aceasta functia afiseaza caile folosinduse de functia cai cu parametrii:arbore,vectorul si lungimea vectorului
void afisare(arbore *a)
{
	int vector[1000];
	cai(a,vector,0);
}
//functia care creeaza un arbore prin alocare se spatiu de memorie pentru nod;
arbore *creare()
{
	arbore *aux;
	int n;
	scanf("%d",&n);
	if(n)
	{
		aux=(arbore*)malloc(sizeof(arbore));
		aux->inf=n;
		printf("fiul stang al lui %d:",n);
		aux->st=creare();
		printf("fiul drept al lui %d:",n);
		aux->dr=creare();
		return aux;
	}
	else
		return NULL;	
}
//afisare radacina,stanga,dreapta
void RSD(arbore *a)
{
	if(a)
	{
		printf("%d",a->inf);
		RSD(a->st);
		RSD(a->dr);
	}
}
//functia testeaza daca elementul se afla in arbore
int cautare(arbore *a,int k)
{
	if(a)
    if(a->inf==k)
            return 1;
    else
            if(a->inf<k)
               cautare(a->dr,k);
            else
               cautare(a->st,k);
 else
    return 0;
}
//interval
int x=3,y=6;
void interval(arbore *a)
{
  if(a)
  {
    if(a->inf>=x && a->inf<=y)
    printf("%d ",a->inf);
    interval(a->st);
    interval(a->dr);
  }
}
//suma numere oarecare
int suma(arbore *a)
{
	if(a)
	{
		s+=a->inf;
		s=suma(a->st);
		s=suma(a->dr);
	}
	return s;
}
//suma numere pozitive
int suma_pozitive(arbore *a)
{
	if(a)
	{
		if(a->inf>0)
			p+=a->inf;
		p=suma_pozitive(a->st);
		p=suma_pozitive(a->dr);
	}
	return p;
}
//suma numere negative
int suma_negative(arbore *a)
{
	if(a)
	{
		if(a->inf<0)
			n+=a->inf;
		n=suma_negative(a->st);
		n=suma_negative(a->dr);
	}
	return n;
}
//numar noduri
int noduri(arbore *a)
{
	if(a)
	{
			nr++;
		nr=noduri(a->st);
		nr=noduri(a->dr);
	}
		return nr;
}
int inaltime_stanga(arbore *a)
{
int l=0,r=0;
if(a==NULL)
return 0;
l=inaltime_stanga(a->st);
r=inaltime_stanga(a->dr);
if(l>r||l==r)
return l+1;
else
return r+1;
}
//inaltime dreapta
int inaltime_dreapta(arbore *a)
{
	int l=0,r=0;
	if(a==NULL)
		return 0;
	l=inaltime_dreapta(a->st);
	r=inaltime_dreapta(a->dr);
	if(l<r||l==r)
		return l+1;
	else
		return r+1;
}
int maxim(arbore *a)
{
	if(a==NULL)
		return 0;
	if(a->inf>max)
		max=a->inf;
	maxim(a->st);
	maxim(a->dr);
	return max;
}
//media aritmetica 
float medie(arbore *a)
{
return suma(a)/noduri(a);
}
int main()
{
	arbore *a;
	int x;
	a=creare();
	//RSD(a);
	/*printf("Valoarea de cautat:");scanf("%d",&x);
	if(cautare(a,x))
		printf("Valoarea exista");
	else
		printf("Valoarea nu exista");*/
	//interval(a);
	//printf("Suma= %d",suma(a));
	//printf("Inaltimea:%i",inaltime_dreapta(a));
	//printf("Numarul de noduri:%i",noduri(a));
	//printf("Maximul este :%i",maxim(a));
	//afisare(a);
	//printf("Media este:%f",medie(a));
	getch();
}