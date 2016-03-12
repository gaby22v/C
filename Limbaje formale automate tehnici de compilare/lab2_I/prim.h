#ifndef PRIM_H
#define PRIM_H
/*Sa( se realizeze o funct,ie în cadrul programului car
e modifica( valoarea unui numa(r
dat ca parametru de intrare cu cel mai apropiat num
a(r prim. Se va folosi aceasta(
funct,ie pentru a genera un fis,ier
out2.txt
care cont,ine imaginea fis,ierului init,ial
modificat dupa( regula de mai sus. */
int prim(int x)
{
	int prim;
	prim=1;
	int d;
	d=2;
	while(d<=n/2)
	{
		if(x%d==0)
			prim=0;
		d=d+1;
	}
return prim;
}
int schimba(int y)
{
	if(y!=y+1)
	{
		if(prim(y+1))
			y=y+1;
		else
			y=y;
	}
return y;
}
void vector()
{
	int i;
	while(a[i])
	{
		a[i]=schimba(a[1]);
	}
afisare();
}
#endif