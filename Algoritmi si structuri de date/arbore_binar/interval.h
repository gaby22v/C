#ifndef INTERVAL_H_INCLUDED
#define INTERVAL_H_INCLUDED
void interval(arbore *a)
{
  if(a)
  {
    if(a->inf>=x && a->inf<=y)
    printf("%d ",a->inf);
    interval(a->st);
    interval(a->dr);
  }
}


#endif // INTERVAL_H_INCLUDED
