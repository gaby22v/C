#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
#include<values.h>
#include"construire.h"
#include"initializare.h"
#include"afisare.h"
#include"suma.h"
#include"lungime.h"
#include"maxim.h"
#include"eliminare.h"
#include"eliminare_pare.h"
#include"inserare.h"
int main()
{
listac *l;
l=init_l(l);
tipar(l);
//printf("\nSuma elementelor acestei liste este urmatoarea: %d",sumlc(l));
//printf("\nLungimea elementelor acestei liste circulare este urmatoarea : %d",lunglc(l));
printf("\nMaximul elementelor este:%i",maxim(l));
}
