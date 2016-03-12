#ifndef CITIRE_H
#define CITIRE_H
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
void citire()
{
	int i,j;
	FILE *f=fopen("in.txt","r");
	fscanf(f,"%i",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			fscanf(f,"%i",&cost[i][j]);
		if(cost[i][j]==0)
			cost[i][j]=99;
		fclose(f);
}
#endif