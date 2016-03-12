#ifndef RSD_H_INCLUDED
#define RSD_H_INCLUDED
void RSD(arbore *a)
{
  if(a)
  {
    printf("%d ",a->inf);
    RSD(a->st);
    RSD(a->dr);
  }
}


#endif // RSD_H_INCLUDED
