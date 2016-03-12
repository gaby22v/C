#ifndef EXT_H
#define EXT_H
void exit(int x)
{
	int j;
  for(j=1;j<=n;j++)
    {
    if(a[x][j]==1 && x!=j)
      printf("\n %d-%d - %d",x,j,a[x][j]);
    }
}
#endif
 