#ifndef INTERVAL_H
#define INTERVAL_H
//Afiseaza( pe ecran toate numerele din fisier care sunt cuprinse într-un interval
void interval()
{
	int c,b,i;
	printf("c=");scanf("%i",&c);
	printf("b=");scanf("%i",&b);
	for(i=1;i<=n;i++)
	{
		if(c<=a[i]&&a[i]<=b)
			printf("%3i",a[i]);
	}
}
#endif