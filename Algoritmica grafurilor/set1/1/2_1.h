#ifndef S2PB1_H
#define S2PB1_H
void vecin()
{
	int i,j,varf;
	printf("Varful este:");scanf("%i",&varf);
	for(i=1;i<=n;i++)
		 if(a[varf][i]==1 &varf !=i)
			 printf("\nVecini:%i",i);
		
}
#endif