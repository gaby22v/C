#ifndef MEDIA_H
#define MEDIA_H
float media(struct lista *l)
{
	struct lista *p;
	int i=0;
	int s=0;
	float ma=0;
	for(p=l;p;p=p->next)
		s+=p->k;
		i++;
		if(i>0)
			ma=s/i;
		return ma;
}
#endif