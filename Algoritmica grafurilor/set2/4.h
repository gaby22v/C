#define PB_4.H
int conex(int a[10][10])
{
	int i,j,c=1;
	rw(a);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]==0)
				c=0;
			if(c==1)
				printf("graf conex");
			else
				printf("graful nu este conex");
			return c;
}