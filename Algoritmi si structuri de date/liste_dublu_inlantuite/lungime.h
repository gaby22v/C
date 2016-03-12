#ifndef LUNGIME_H
#define LUNGIME_H
int lungime(struct lista *l)
{
	struct lista *p;
	int i=0;
	for(p=l;p;p=p->next)
		i++;
	return i;
}
#endif