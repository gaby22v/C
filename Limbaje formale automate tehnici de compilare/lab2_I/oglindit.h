#ifndef OGLINDIT_H
#define OGLINDIT_H
/*Genereaza( un fis,ier de ies,ire
out.txt
care va cont,ine numerele din fis,ierul init,ial,
având cifrele inversate (ex. numa(rul 2987 este inve
rsat în 7892). */
int oglindit(int x)
{       int og=0;
         while(x)
          {
			  og=og*10+x%10;
           x=x/10;
		 }
 return og;
}

void vector_oglindit()
{
	int i;
	FILE *f1=fopen("out.txt","w");
	for(i=1;i<=n;i++)
	{
		fprintf(f1,"%i ",oglindit(a[i]));
	}
	printf("S-a scris in fisierul out.txt");
}
#endif