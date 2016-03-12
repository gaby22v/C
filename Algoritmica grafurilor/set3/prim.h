#ifndef PRIM_H
#define PRIM_H
int s[10],viz[10];
void prim(int x)
{
	int i,j,p,min,k,c=0;
	viz[x]=1;
	for(i=1;i<=n;i++)
		s[i]=x;
	s[x]=0;
	for(k=1;k<=n-1;k++)
	{
		min=99;
		p=0;
		for(i=1;i<=n;i++)
		{
			if(!viz[i]&&min>a[i][s[i]])
			{
				min=a[i][s[i]];
				p=i;
			}
			viz[p]=1;
		}
		for(i=1;i<=n;i++)
			if(!viz[i]&&a[i][s[i]]>a[i][p])
				s[i]=p;
			c=c+min;
	}
			printf("%i",c);
}
#endif
