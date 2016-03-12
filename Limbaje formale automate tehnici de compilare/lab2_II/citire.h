#ifndef CITIRE_H
#define CITIRE_H
char s[200];
void citire()
{
	FILE *f=fopen("in.txt","r");
	fgets(s,100,f);
}
#endif