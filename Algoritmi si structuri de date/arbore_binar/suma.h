#ifndef SUMA_H_INCLUDED
#define SUMA_H_INCLUDED


int suma(arbore *a)
{
  if(a)
  {
    S+=a->inf;
    S=suma(a->st);
    S=suma(a->dr);
  }
return S;
}
#endif // SUMA_H_INCLUDED
