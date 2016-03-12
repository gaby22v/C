#ifndef ELIMINARE_H_INCLUDED
#define ELIMINARE_H_INCLUDED
struct lista *eliminare(int x,struct lista *l)
{
     struct lista *p,*q;
  if(x==l->k && l->next==NULL)
    return NULL;
  if (x==l->k)
  {
    p=l;
    l=l->next;
    l->prev=NULL;
    free(p);
  }
  else
  {
    for(p=l;(p->next->k!=x)&&(p->next!=NULL);p=p->next);
    q=p->next;
    p->next=q->next;
    q->next->prev=p;
    free(q);
  }
return l;
}

#endif // ELIMINARE_H_INCLUDED
