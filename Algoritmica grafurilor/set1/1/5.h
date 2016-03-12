#ifndef PB5_H
#define PB5_H
void grad() // Gradul Minim, Maxim si Mediu
{ 
	int g[100],gr=0,k=1,i,j,aux;
  g[k]=0;
  for(k=1;k<=n*2;)
  for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
      {
      g[k]=a[i][j];
      k++;
      }
    }
  for(i=1;i<=n*n;i++)
    gr+=g[i];
printf("\n\nGradul Maxim: %d ",gr);
  for(i=1;i<=n*n;i++)
    for(j=1;j<=n*n;j++)
      if(g[i]<g[j])
 {
 aux=g[i];
 g[i]=g[j];
 g[j]=aux;
 }
printf("\n\nGradul minim: %d",aux);
  float med;
  med=(float(gr)/(n*n));
printf("\n\nGradul mediu: %3.2f",med);
}
#endif