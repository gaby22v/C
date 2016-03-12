#ifndef LUNGIME_H
#define LUNGIME_H
int lungime(struct lista *l)
{
	int lungime=0;
	struct lista *p;
	for(p=l;p;p=p->next)
		lungime++;
	return lungime;
}
#endif