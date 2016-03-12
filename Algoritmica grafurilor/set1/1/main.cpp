#include<stdio.h>
#include<conio.h>
#include "citire.h"
#include "afisare.h"
#include "3.h"
#include "4.h"
#include "6.h"
#include "7.h"
#include "10.h"
#include "5.h"
#include "2_1.h"
#include "2_2.h"
int main()
{
	int i,j,a[10][10],n;
	citire();
	citire_s();
	afisare();
	getch();
	//exit(2);
	//enter(2);
	//complet();
	//tranzitiv();
	//simetric();
	//regulat();
	//antisimetric();
	//grad();
	//vecin();
	if(subgraf())
		printf("da");
	else
		printf("nu");
}