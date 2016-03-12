//transformare din binar in zecimal semn-marime
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
int N10,i,s,n;
char N2[32];
printf("\n N2= ");scanf("%s",&N2);
n=strlen (N2);
N10=0;
s=N2[0];
for (i=1;i<=n-1;i++)
N10=N10+(N2[i]-'0')*pow(2,n-i-1);
if (s=='1')
N10=-N10;
printf("\n N10=%d \n",N10);
return 0;
}