#ifndef ELIMINARE_PARE_H_INCLUDED
#define ELIMINARE_PARE_H_INCLUDED
struct lista *elim_pare(struct lista *l)
{ int x;
  struct lista *p,*q;
  for(p=l;p;)
  {
    x=p->k;
    if(x%2==0)
    {
      q=p->next;
      printf("\nSe sterge nr. par %i. ",x);
      l=eliminare(p->k,l);
      printf("\nLista ramane: ");
      printLDI(l);
      p=q;
    }
    else
      p=p->next;
  }
return l;
}


#endif // ELIMINARE_PARE_H_INCLUDED
