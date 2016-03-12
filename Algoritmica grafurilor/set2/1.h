#define PB1_H
void vecin(int a[10][10])
{
	int v,i;
	printf("Varful:");scanf("%i",&v);
	for(i=1;i<=n;i++)
		if(a[v][i]==1 && v!=i)
		{
			printf("\n Vecinii: %i",i);
		}
}
