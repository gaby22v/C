#ifndef SDR_H_INCLUDED
#define SDR_H_INCLUDED


void SDR(arbore *a)
{
  if(a)
  {
    SDR(a->st);
    SDR(a->dr);
    printf("%d ",a->inf);
  }
}
#endif // SDR_H_INCLUDED
