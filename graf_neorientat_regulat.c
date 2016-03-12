//graf neorientat regulat
//un graf in care toate vf au acelasi grad
//se numeste graf regulat
#include <stdio.h>
#include <conio.h>
void main()
{
int n,i,j,a[20][20],ok=1,grad=0,aux=0;ok=1;
FILE *f=fopen("c:intrare.txt","r");
fscanf(f,"%d",&n);
for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
     fscanf(f,"%d",&a[i][j]);
fclose(f);
for(i=1;i<=n;i++)
  if(a[1][i]==1) grad++;
for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   if(a[i][j]==1) aux++;
  if(aux!=grad) ok=0;
  aux=0;
   }     
if(ok==0) printf("Graful nu este regulat.");
 else printf("Graful este regulat.");
getch();
clrscr();
}

