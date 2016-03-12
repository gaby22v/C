#include "stdio.h"

struct persoana
{
char nume[30];
short varsta;
}p;
struct angajat
{
struct persoana inf;
	int salariu;
}a[30],aux;

void afis(int n,struct angajat b[20])
{
int i;
for (i=1;i<=n;i++)
	printf("\nNume: %10s , Varsta: %2i Salariu: %5i ",b[i].inf.nume,b[i].inf.varsta,b[i].salariu);


}

float mediu(int n,struct angajat b[20])
{
int i,nr=0,s=0;
for (i=1;i<=n;i++)
	{
	s+=b[i].salariu;
	nr++;
	}
	return (s/nr);
}








int main()
{
int i,j,n;

printf("Nr persoane=");scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("Numele :");scanf("%s",&a[i].inf.nume);
printf("Varsta :");scanf("%i",&a[i].inf.varsta);
printf("Salariu :");scanf("%i",&a[i].salariu);
}

printf("Lista Initiala Angajati");
afis(n,a);
printf("\n");


for (i=1;i<=n-1;i++)
	for (j=i+1;j<=n;j++)
		if (a[i].inf.varsta<a[j].inf.varsta)
			{
			aux=a[i];
			a[i]=a[j];
			a[j]=aux;
			}
printf("\nLista Finala Angajati");
afis(n,a);
printf("\n");
printf("Salariu mediu este: %.2f",mediu(n,a));



}






