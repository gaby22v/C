#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iomanip.h>
 int n;
void alfabet_initial()
{
 for(char i=65;i<=122;i++)
 {
   if (i!=91&i!=92&i!=93&i!=94&i!=95&i!=96)
   {
   cout<<i<<' ';
   }
 }
}
void alfabet_defazat()
{

 cout<<endl;
 cout<<"defazajul alfabetului "<<endl;
 cout<<"n=";cin>>n;
 for(char j=65;j<=122;j++)
 {
 if (j+n>122)
	if(char(j+n)==' ') cout<<' ';
	else
	cout<<char(j-58+n)<<' ';
 else
 if (j+n!=91&j+n!=92&j+n!=93&j+n!=94&j+n!=95&j+n!=96) cout<<char(j+n)<<' ';
 }
}
void afisare1()
{

 char x[50];
 cout<<"x=";gets(x);
 for(char j=0;j<strlen(x);j++)
 {
 if ((x[j]+n>122)&('#'==32))
 cout<<char(x[j]-58+n)<<' ';
  else
      cout<<char(x[j]+n);
  }
}
void main(void)
{
 clrscr();
 char n,i;
 char x[50];
 alfabet_initial();
 alfabet_defazat();
 cout<<endl<<endl;
 afisare1();
 cout<<endl;
 getch();
}