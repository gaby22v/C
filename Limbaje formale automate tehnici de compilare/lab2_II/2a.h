#ifndef A_H
#define A_H
void cuvinte()
{
int nr,i,k;
printf("k=");scanf("%i",&k);
strcat(s, " ");
nr=0;
for(i=0;i<strlen(s);i++)
	if(s[i]!=' ' && s[i+1]==' ')
		nr++;
	printf("%i\n",nr);
}
#endif