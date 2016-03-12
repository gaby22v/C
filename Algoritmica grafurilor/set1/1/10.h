#ifndef PB10_H
#define PB10_H
void regulat()
{ 
	int g[100],k=0,x=0,aux=0,i,j;
	g[k]=0;
    for(i=1;i<=n;i++)
      {
      for(j=1;j<=n;j++)
 {
 if(i!=j)
          x+=a[i][j];
 }
    g[k]=x;
    x=0;
    k++;
      }
    k--;
    printf("\nk= %d",k);
  for(i=0;i<=k;i++)
    {
    printf("\n g[%d]= %d",i,g[i]);
    if(g[i]!=k)
      aux++;
    }
  if(aux==0)
    {
    printf("\n\nGraf regulat de grad %d",k);
    }
  else
    {
    printf("\n\nGraf neregulat");
    }
}
#endif