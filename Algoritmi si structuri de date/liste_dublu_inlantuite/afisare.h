#ifndef AFISARE_H
#define AFISARE_H
void afisare(struct lista*l)
{
	struct lista *p;
	printf("NULL");
	for(p=l;p;p=p->next)
		printf("<=>%d",p->k);
	printf("<=>NULL\n");
}
#endif