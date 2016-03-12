#define PB8_H
#define INFINIT 99
// x este varful de start
void dijkstra(int x)
{
	//variabile
	int i,min,ok=1,k,v[10],t[10],d[10];
	//initializari variabile
	for(i=1;i<=n;i++)
	{
		d[i]=a[x][i];
		if((d[i]<INFINIT)&&(d[i]>0))
			t[i]=x;
	}
	while(ok)
	{
		//cautare distanta minima
		min=INFINIT;
		for(i=1;i<=n;i++)
			if((v[i]==0)&&(min>d[i]))
			{
				min=d[i];
				k=i;
			}
			//actualizare distante
			if(min==INFINIT)
				ok=0;
			else
			{
				v[k]=1;
				for(i=1;i<=n;i++)
					if((v[i]==0)&&(d[i]>d[k]+a[k][i]))
					{
						d[i]=d[k]+a[k][i];
						t[i]=k;
					}
			}
	}
	// afisarea unui vector cu distante
	for(i=1;i<=n;i++)
	{
		printf("%i ",d[i]);
		printf("\n");
	}
}

