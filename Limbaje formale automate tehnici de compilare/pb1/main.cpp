/*Sa se identifice si sa numere majusculele ce apar intr-un sir  de caractere citit de la tastatura */
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
int numar(char s[30])
{
	int i,nr=0;
	for(i=0;i<strlen(s);i++)
	{
		if(isupper(s[i]))
			nr++;
	}
	return nr;
}
void majuscule(char s[30])
{
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(isupper(s[i]))
			printf("%c\t",s[i]);
	}
}
int main()
{
	char s[30];
	citire(s);
	afisare(s);
	printf("\nNumarul de majuscule este:%i",numar(s));
	printf("\nMajusculele sunt:");
	printf("\n");
	majuscule(s);
	getch();
}
