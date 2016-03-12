#ifndef AFISARE_H
#define AfISARE_H
void afisare(struct lista *l)
{
	struct lista *p;
	for(p=l;p;p=p->next)
		printf("%d->",p->k);
	printf("NULL\n");
}
#endif