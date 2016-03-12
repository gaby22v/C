#ifndef INIT_H_INCLUDED
#define INIT_H_INCLUDED
struct lista *init_ldi(struct lista *l)
{  struct lista *p;
	int ci,k;
	char c,cc[5];
	l=NULL;
	printf("Doriti sa incepeti initializarea listei [n pentru terminare]?");
	scanf("%c",&c);//c1=getchar();
	printf("\n");
	if (c!='n')
		k=1;
	else
		k=-1;
	while (k!=-1)
		{printf("O cheie : ");
		scanf("%s",cc);//c1=getchar();
		if (strcmp(cc,"n"))
			k=1;
		else
			k=-1;
		ci=atoi(cc);
		if(k!=-1)
			l=cons_ldi(ci,l);
		}
	return(l);
}


#endif // INIT_H_INCLUDED
