#define PB3_H
int minim(int x,int y)
{
	int min;
	if(x>y)
		min=y;
	else
		min=x;
	return min;
}
void rw(int a[10][10])
{
	int k,i,j;
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(a[i][j]==0 && i!=k&&j!=k)
					a[i][j]=minim(a[i][k],a[k][j]);
				afisare(a);
}
