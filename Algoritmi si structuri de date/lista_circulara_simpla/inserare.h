#ifndef INSERARE_H_INCLUDED
#define INSERARE_H_INCLUDED
struct lista *insert(int poz,int x,struct lista *l)
{ lista *aux,*p;
  if(l==NULL)
  {
    aux=(struct lista *)malloc(sizeof(struct lista));
    aux->k=x;
    aux->prev=NULL;
    aux->next=NULL;
    l=aux;
  }
  else
    if(poz==1)
    {
      aux=(struct lista *)malloc(sizeof(struct lista));
      aux->k=x;
      aux->prev=NULL;
      aux->next=l;
      l=aux;
    }
    if(poz!=1)
    {
      int i=1;
      p=l;
      for(i=1;i<poz-1;i++)
 p=p->next;
 aux=(struct lista *)malloc(sizeof(struct lista));
 aux->k=x;
 aux->next=p->next;
 p->next->prev=aux;
 p->next=aux;
 aux->prev=p;
     }
return l;
}


#endif // INSERARE_H_INCLUDED
