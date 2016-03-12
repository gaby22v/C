#ifndef MAXIM_H
#define MAXIM_H
int maxim(struct lista *l)
{
	int max=-32800;
	struct lista *p;
	for(p=l;p;p=p->next)
		if(p->k>max)
			max=p->k;
		return max;
}
#endif