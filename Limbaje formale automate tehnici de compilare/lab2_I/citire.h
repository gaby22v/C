#ifndef CITIRE_H
#define CITIRE_H
int n,a[50];
void citire()
{
	int i;
	FILE *f=fopen("numere.txt","r");
	fscanf(f,"%i",&n);
	for(i=1;i<=n;i++)
			fscanf(f,"%i",&a[i]);
		fclose(f);
}
#endif