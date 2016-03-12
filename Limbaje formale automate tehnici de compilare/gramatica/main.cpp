#include <string.h>
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <STDLIB.H>
#include <values.h>
void interval()
{
  int nr[100];
  FILE *f=fopen("in.txt","r");
  char s[100],v[100][20],*pch;
  int  a,b,p,i=0,j,k;
  while(!feof(f))
  {
    fgets(s,50,f);
      printf("Sirul este: ");
  puts(s);
    pch=strtok(s," :;,.\n");
  while(pch!=NULL)
    {
    strcpy(v[i],pch);
    i++;
    pch=strtok(NULL," :;,.\n");
    }
  }
  int n=i-1;
  printf("\nNumerele sunt: \n");
  for(j=0;j<i;j++)
    puts(v[j]);
  cout<<"\na= ";
  cin>>a;
  cout<<"\nb= ";
  cin>>b;
  for(i=0;i<=n;i++)
    nr[i]=atoi(v[i]);
  printf("\nNumerele Sunt: \n");
  for(i=0;i<=n;i++)
    printf("%d ",nr[i]);
  cout<<"\nIn Interval: \n";
  for(i=0;i<=n;i++)
    if(nr[i]>a && nr[i]<b)
      printf(" %d ",nr[i]);
  fclose(f);
}
int i,j,n;
char S,s[100];
struct productie
{ char st[10],dr[15];
} p[30];
/*
void gramatica()
{
  int i,n,j;
  char neterm[10];
  char term[10];
  char start,s[100];
*/
FILE *f=fopen("lfatc.txt","r");
FILE *g=fopen("out0.txt","w");
void citire_simbol()
{  //Citire simbol de start , nr de proiectii
  S=fgetc(f);
  fscanf(f,"%d\n",&n);
  printf("\nSimbolul de start este: %c",S);
  printf("\nNr de productii este: %d\n",n);
  printf("Productiile sunt:\n ");
  for(i=1;i<=n;i++)
    {
    strset(s,'\0');
    fgets(s,99,f);
//    puts(s);
    int k=0;
    while(s[k]!='-')
      {
      p[i].st[k]=s[k];//st[k++]=s[i++]
      k++;
      }
    p[i].st[k]='\0';
    k+=2;
    int j=0;
    while(k<strlen(s))
      {
      p[i].dr[j]=s[k];
      k++;
      j++;
      }
    p[i].dr[j]='\0';
    }
    for(i=1;i<=n;i++)
      printf("\n%s-->%s",p[i].st,p[i].dr);
}           
void nerealizabili()
{
int m;
char realiz[100];
m=1;
do
{
	m=0;
	
}while (m=0);
}
int main()
{ 
//  interval();
//  gramatica();
  citire_simbol();
getch();
}