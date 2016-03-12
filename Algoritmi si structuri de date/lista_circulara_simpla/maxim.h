#ifndef MAXIM_H_INCLUDED
#define MAXIM_H_INCLUDED
int maxim(struct lista *l)
{
     struct lista *p;
  int max=-32800;
  for(p=l;p;p=p->next)
    if (p->k>max)
      max=p->k;
return max;
}
#endif // MAXIM_H_INCLUDED
