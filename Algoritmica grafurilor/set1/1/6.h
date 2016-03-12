#ifndef PB6_H
#define PB6_H
void simetric()
{
	int i,j,x=1;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]==1 && a[j][i]==0)
				x=0;
			if(x==1)
				printf("Graful este simetric");
			else
				printf("\0");
}
void antisimetric()
{
	int i,j,x=1;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]==1 && a[j][i]==1)
				x=0;
			if(x==1)
				printf("Graful este antisimetric");
			else
				printf("\0");
}
#endif