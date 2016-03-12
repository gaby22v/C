#define PB10_H
void bellman_ford()
{
int z,s,v,k,u,d[50],q[50],i;
printf("\n\nStart: ");
scanf("%d",&s);
printf("n= %d",n);
for(i=1;i<=n;i++)
{
q[i]=99;
if(i==s)
q[i]=0;
}
printf("\nVectorul Q:\n");
for(i=1;i<=n;i++)
printf(" %d ",q[i]);
for(i=1;i<=n;i++)
for(u=1;u<=n;u++)
for(v=1;v<=n;v++)
if(q[v]>q[u]+a[u][v])
q[v]=q[u]+a[u][v];
printf("\nVectorul Q:\n");
for(i=1;i<=n;i++)
printf(" %d ",q[i]);
}
