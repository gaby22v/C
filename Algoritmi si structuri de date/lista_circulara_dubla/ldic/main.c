#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include "cons.h"
#include "init.h"
#include "tipar.h"
#include "eliminare.h"

int main()
	{
	 struct lista *l;int x;
	 l=init_ldi(l);
	 tipar_ldi(l);
	 printf("\nElimina elementele : ");scanf("%d",&x);
	 l=eliminare(l,x);
	 tipar_ldi(l);
	 getch();
	 }
