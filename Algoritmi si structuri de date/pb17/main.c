#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include<malloc.h>
#include "afisare.h"
#include "construire"
#include "initializare.h"
int main()
{
   struct lista *l,*m;
   l=init();
	m=init();
	afisare(l);
	afisare(m);
}
