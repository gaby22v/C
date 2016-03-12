#ifndef INITIALIZARE_H
#define INITIALIZARE_H
#include "construire.h"
#include "gasit.h"
struct lista *init()
{
	char c,ck,cc[5];
	int ci,k;
	struct lista *l;
	printf("Doriti sa incepeti initializarea listei?[y/n][n final]");scanf("%c",&c);
	getchar();
	if(c!='n')
		k=1;
	else
		k=-1;
	l=NULL;
	while(k!=-1)
	{
		printf("\nO cheie:");scanf("%s",&cc);
		getchar();
		if(strcmp(cc,"n"))
			k=1;
		else
			k=-1;
		ci=atoi(cc);
		if(k!=-1)
			if(gasit(l,ci)==0)
				l=adaugare(ci,l);
	}
	return l;
}
#endif