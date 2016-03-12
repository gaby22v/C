#ifndef MEDIA_H
#define MEDIA_H
float media(struct lista *l)
{
	float s=0,nr=0,m;
	struct lista *p;
	for(p=l;p;p=p->next)
	{
		s+=p->k;
		nr++;
	}
	m=s/nr;
	return m;
}
#endif