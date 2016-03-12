/*Sa se determine reuniunea,intersectia si diferenta a doua multimi(siruri de caractere) citite dintr-un fisier*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	FILE *f=fopen("s.txt","r");
	FILE *f1=fopen("t.txt","r");
	char s[30];
	char t[30];
	fgets(s,100,f);
	fgets(t,100,f1);
	fclose(f);
	fclose(f1);
	if