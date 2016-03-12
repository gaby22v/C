#ifndef S2PB2_H
#define S2PB2_H
void citire_s()
{
	int i,j,g,s[20][20];
		FILE *f1=fopen("sub.txt","r");
	fscanf(f1,"%i",&g);
	for(i=1;i<=g;i++)
	for(j=1;j<=g;j++)
		fscanf(f1,"%i",&s[i][j]);
	fclose(f1);
}
	int subgraf()
	{
		int i,j,g,s[20][20];
		for(i=1;i<=g;i++)
			for(j=1;j<=g;j++)
		if(a[i][j]!=s[i][j])
return 0;
		return 1;
	}
#endif