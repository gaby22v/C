#ifndef SRD_H_INCLUDED
#define SRD_H_INCLUDED

void SRD(arbore *a)
{
  if(a)
  {
    SRD(a->st);
    printf("%d ",a->inf);
    SRD(a->dr);
  }
}


#endif // SRD_H_INCLUDED
