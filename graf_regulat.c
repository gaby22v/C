void regulat()
{
     int i,j,grad=0,aux=0,ok=1;
     for(i=1;i<=n;i++)
  if(a[1][i]==1)
       grad++;
  for(i=1;i<=n;i++)
  {
       for(j=1;j<=n;j++)
            if(a[i][j]==1)
                 aux++;
            if(aux!=grad)
                 ok=0;
            aux=0;
  }
  if(ok==0)
       printf("Graful nu este regulat");
  else
       printf("Graful este regulat de grad %i",grad);
}     