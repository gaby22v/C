#ifndef RF_H
#define RF_H
void rf()
{ 
	int k,i,j;
for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(i!=j && i!=k && j!=k)
a[i][j]=minim(a[i][j],a[i][k]+a[k][j]);
afisare(a);
}
#endif