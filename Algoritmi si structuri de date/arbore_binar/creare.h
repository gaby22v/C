#ifndef CREARE_H_INCLUDED
#define CREARE_H_INCLUDED

typedef struct nod
{ int inf;
  struct nod *st,*dr;
} arbore;

arbore *creare()
{
  arbore *aux;
  int n;
  scanf("%d",&n);
  if(n)
  {
     aux=(arbore *)malloc(sizeof(arbore));
     aux->inf=n;
     printf("fiul stang al lui %d: ",n);
     aux->st=creare();
     printf("fiul drept al lui %d: ",n);
     aux->dr=creare();
     return aux;
  }
  else return NULL;
}

#endif // CREARE_H_INCLUDED
