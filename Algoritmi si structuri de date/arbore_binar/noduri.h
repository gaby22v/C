#ifndef NODURI_H_INCLUDED
#define NODURI_H_INCLUDED

int noduri(arbore *a)
{
  if(a)
  {

    if(a->st==NULL && a->dr!=NULL || a->st!=NULL && a->dr==NULL)
    nr++;
    nr=noduri(a->st);
    nr=noduri(a->dr);
  }
return nr;
}

#endif // NODURI_H_INCLUDED
