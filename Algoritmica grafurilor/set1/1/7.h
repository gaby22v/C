#ifndef COMPLET_H
#define COMPLET_H
void complet()
{
	int i,j,c=1;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]==0 & i!=j)
				c++;
	if(c==1)
		printf("\nGraful este complet");
	else
		printf("\nGraful nu este complet");
}
void tranzitiv()
{
	int i,j,k,x=1;//pp ca graful este tranzitiv
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			for(k=1;k<=n;k++)
				if(a[i][j]==1&&a[j][k]==1&&a[i][k]!=1)
					x=0;
				if(x==1)
					printf("\nGraful este tranzitiv");
				else
					printf("\nGraful nu este tranzitiv");
}
#endif