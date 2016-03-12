#define PB_5.H
void muchie_critica(int a[10][10])
{
	int x,y,c;
	printf("Muchia dintre x si y:");scanf("%i %i",&x,&y);
	a[x][y]=a[y][x]=0;
	c=conex(a);
	if(c==0)
		printf("muchie critica");
	else
		printf("muchia nu este critica");
}