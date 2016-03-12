#ifndef KRUSKAL_H
#define KRUSKAL_H
int find(int i)
{
	while(parent[i])
		i=parent[i];
	return i;
}
int uni(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}
void kruskal()
{
while(ne<n)
{
	for(i=1,min=99;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(cost[i][j]<min)
			{
				min=cost[i][j];
				a=u=i;
				b=v=j;
			}
		}
	}
	u=find(u);
	v=find(v);
	if(uni(u,v))
	{
		printf("\n%d Muchia (%d,%d) = %d",ne++,a,b,min);
		mincost +=min;
	}
	cost[a][b]=cost[b][a]=99;
}
printf("\n");
printf("Costul minim:%d",mincost);
}
#endif