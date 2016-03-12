#ifndef INT_H
#define INT_H
void enter(int x)
{
	int i;
  for(i=1;i<=n;i++)
    {
    if(a[i][x]==1 && x!=i)
      printf("\n %d-%d - %d",i,x,a[i][x]);
    }
}
#endif