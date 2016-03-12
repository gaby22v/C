#ifndef FRUNZA_H_INCLUDED
#define FRUNZA_H_INCLUDED

void frunza(arbore *a)
{
  if(a)
  {

    if(a->st==NULL && a->dr==NULL)
    printf("%d ",a->inf);
    frunza(a->st);
    frunza(a->dr);
  }
}

#endif // FRUNZA_H_INCLUDED
