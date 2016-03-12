#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include "construire.h"
#include "adaugare.h"
#include "empty.h"
#include "initializare.h"
#include "afisare.h"
#include "eliminare.h"
#include "first.h"
#include "suma_pare.h"
#include "lungime.h"
#include "maxim.h"
#include "reverse.h"
#include "concatenare.h"
#include "suma_negative.h"
#include "suma_pozitive.h"
#include "interval.h"
int main()
{
	QUEUE q;
	getch();
	q=initq(q);
	afisare(q);
}