#include <stdio.h>
#include <conio.h>





void citire(int *n,int v[50])
{  int i;
printf("\nn= ");scanf("%d",n);
for(i=0;i<*n;i++)
  {
  printf("V[%d]= ",i);scanf("%d",&v[i]);
  }
}

void afisare(int n,int v[50])
{ int i;
  for (i=0;i<n;i++)
  printf("\t\nV[%d]= %d",i,v[i]);
}

void interschimba(int *x,int *y)
{ int aux;
  aux=*x;
  *x=*y;
  *y=aux;
}

void sortare(int n,int v[50])
{ int i,j;
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(v[i]>v[j]) interschimba(&v[i],&v[j]);
}

void main()
{ int n,v[50];
clrscr();
citire(&n,v);
afisare(n,v);
sortare(n,v);
afisare(n,v);
getch();
}