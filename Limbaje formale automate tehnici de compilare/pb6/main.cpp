#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
char s[30],t[30];
void citire()
{
	gets(s);
	printf("\n");
	gets(t);
}
void afisare()
{
	puts(s);
	printf("\n");
	puts(t);
}
void diferenta()
{
	char v[30],c;
	int l;
	l=strlen(s);
	while(l!=0)
	{
		c=s[l];
		if(c==1)
			continue;
		if(strchr(t,c)==NULL)
			printf("%c",c);
		s[l]=1;
		while(v=strchr(s,c))
			v[0]=1;
	}
}
int main()
{
	char s[30];
	char t[30];
	citire();
	afisare();
	diferenta();
	getch();
}