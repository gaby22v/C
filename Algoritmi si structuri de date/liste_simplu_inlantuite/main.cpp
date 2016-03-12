#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include<malloc.h>
#include "construire.h"
#include "initializare.h"
#include "afisare.h"
#include "gasit.h"
#include "suma_pare.h"
#include "suma_impare.h"
#include "suma_negative.h"
#include "suma_pozitive.h"
#include "interval.h"
#include "media.h"
#include "maxim.h"
#include "concatenare.h"
#include "reverse.h"
#include "inserare_interior.h"
#include "inserare_sfarsit.h"
#include "interclasare.h"
#include "lungime.h"
#include "eliminare.h"
#include "eliminare_pozitive.h"
#include "eliminare_negative.h"
#include "eliminare_nule.h"
int main()
{
	struct lista *l,*m;
	int poz,x;
	l=init();
	m=init();
	afisare(l);
	afisare(m);
	//printf("\nSuma numerelor pare este %i",suma_pare(l));
	//printf("\nSuma numerelor impare este %i",suma_impare(l));
	//printf("\nSuma numerelor negative este %i",suma_negative(l));
	//printf("\nSuma numerelor pozitive este %i",suma_pozitive(l));
	//interval(l);
	//printf("Media este %f",media(l));
	//printf("Maximul este %i",maxim(l));
	l=concatenare(l,m);
	afisare(l);
	//l=reverse(l);
	//afisare(l);
	//printf("De inserat:");scanf("%i",&x);
	//printf("POzitia:");scanf("%i",&poz);
	//l=inserare_interior(l,x,poz);
	//afisare(l);
	//l=inserare_sfarsit(l,x);
	//afisare(l);
	//l=interclasare(l,m);
	//afisare(l);
	//l=eliminare(l,x);
	//afisare(l);
	//printf("Lungimea listei este:%i",lungime(l));
	//l=eliminare_pozitive(l);
	//l=eliminare_negative(l);
	//l=eliminare_nule(l);
	getch();
}
