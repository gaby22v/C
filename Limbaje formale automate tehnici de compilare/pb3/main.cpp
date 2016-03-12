/*Sa se calculeze suma numerelor care apar intr-un sir de caractere citit dintr-un fisier */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s[30];
	int suma=0,t,i;
	FILE *f=fopen("3.txt","r");
	 fgets(s,100,f);
  fclose(f);
  for(i=0;i<strlen(s);i++)
{ 
		t=0;
      while(isdigit(s[i]))
      {
      t=t*10+s[i]-48;
	i++;
	  }
  }
      suma=suma+t;
      printf("Suma este:%i",suma);
      getch();
}