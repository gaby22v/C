/* PROGRAM DE APLICATIE PENTRU TDA COADA :SORTAREA DUPA RANGURI */

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include "c:\windows\desktop\coada.c"
#include "c:\windows\desktop\cit_af_v.c"

void Radix_sort(int n,int m,int v[20])
{ int i,j; QUEUE *vq[20];
	for(i=0;i<m;i++) vq[i]=newq(vq[i]);
	for(i=0;i<n;i++)
			{
			vq[v[i]]=addq(vq[v[i]],v[i]);
			 }
	for(i=0;i<m;i++)
			 {
			 printf("\n coada %d  ",i);
			 printq(vq[i]);
			 }
	for(j=i=0;i<m;i++)
		{
			while(!emptyq(vq[i]))
			 { v[j++]=frontq(vq[i]);
				vq[i]=remq(vq[i]);
				/*printf("\n coada %d dupa remq :  ",i);
				printq(vq[i]);*/
			 }
		 free(vq[i]);
		 }
     return;
}

main()
{  int n,m,v[20];
	clrscr();
	printf("\n introduceti nr. elem. vectorului =");
	scanf("%d",&n);
	printf("\n introduceti nr. valori posibile pentru chei =");
	scanf("%d",&m);
	citire_v(n,v);
	afisare_v(n,v);
	Radix_sort(n,m,v);
	printf(" \n DUPA SORTARE CU MET. RADIX SORT : ");
	afisare_v(n,v);
	getch();
}
