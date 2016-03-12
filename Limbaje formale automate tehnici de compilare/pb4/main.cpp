/*Sa se elimine toate spatiile dintr-un sir de caractere citit dintr-un fisier*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	FILE *f=fopen("4.txt","r");
	char s[30];	
	int i;
	fgets(s,100,f);
for(i=0;i<strlen(s);i++)
	if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
		printf("\n%c",s[i]);
getch();
}
