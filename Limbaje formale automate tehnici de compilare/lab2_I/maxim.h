#ifndef M_H
#define M_H
//Afiseaza( minimul si maximul numerelor din fisierul de intrare. 
int minim()
{
	int i;
	int min=999;
	for(i=1;i<=n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
return min;
}
int maxim()
{
	int i,max=0;
	for(i=1;i<=n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}
#endif