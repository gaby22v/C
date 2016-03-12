//transformare binar zecimal vector
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(int arhc, char ** argv)
{
int i,k,n,ef,ep;
char N2[64];
double PF,PI,N10;
printf("N2=");scanf("%s",N2);
n=strlen(N2);
for (i=0;i<=n-1;i++)
if (N2[i]=='.')
{
k=i;
PI=0;
PF=0;
ep=k-1;
ef=-1;
}
for (i=0;i<=k-1;i++)
{
PI=PI+(N2[i]-'0')*pow(2,ep);
ep--;
}
for (i=k+1;i<n;i++)
{
PF=PF+(N2[i]-'0')*pow(2,ef);
ef--;
}
N10=PI+PF;
printf("\n N10=%f \n",N10);
return 0;
}