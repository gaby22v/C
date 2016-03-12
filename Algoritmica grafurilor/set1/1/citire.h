#ifndef CITIRE_H
#define CITIRE_H
int n,a[10][10];
void citire()
{
	int i,j;
FILE *f=fopen("in.txt","r");
fscanf(f,"%i",&n);
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		fscanf(f,"%i",&a[i][j]);
	fclose(f);
}
#endif