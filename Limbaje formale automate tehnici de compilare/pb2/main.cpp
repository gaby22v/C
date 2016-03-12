/*Sa se calculeze suma cifrelor cara apar intr-un sir de caractere citit de la tastatura */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void citire(char s[30])
{
	gets(s);
}
void afisare(char s[30])
{
	puts(s);
}
int suma(char s[30])
{
	int suma=0,i;
	for(i=0;i<strlen(s);i++)
	{
		if(isdigit(s[i]))
	suma+=s[i]-48;
	}
return suma;
}
int main()
{
	char s[30];
	citire(s);
	afisare(s);
	printf("Suma este:%i",suma(s));
getch();
}