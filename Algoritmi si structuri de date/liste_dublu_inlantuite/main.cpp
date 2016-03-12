#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include<malloc.h>
#include "construire.h"
#include "initializare.h"
#include "afisare.h"
#include "suma_pozitive.h"
#include "suma_negative.h"
#include "lungime.h"
#include "maxim.h"
#include "media.h"
#include "eliminare.h"
#include "eliminare_pare.h"
#include "eliminare_impare.h"
#include "eliminare_pozitive.h"
#include "eliminare_negative.h"
#include "eliminare_nule.h"
#include "concatenare.h"
int main()
{
	struct lista *l;
	l=init_ldi(l);
	afisare(l);
	//printf("\nSuma elementelor pozitive este %d",suma_pozitive(l));
	//printf("\nSuma elementelor negative este %d",suma_negative(l));
	//printf("\nLungimea listei:%i",lungime(l));
	//printf("\nMaximul este:%i",maxim(l));
	//printf("\nMedia aritmetica este:%f",media(l));
	//printf("\nCe element se sterge:?");scanf("%i",&x);
	//l=eliminare(l,x);
	//printf("\nDupa eliminare lista devine:");
	//afisare(l);
	//l=eliminare_pare(l);
	//l=eliminare_impare(l);
	//l=eliminare_pozitive(l);
	//l=eliminare_negative(l);
	//l=eliminare_nule(l);
	getch();
}