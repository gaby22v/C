#ifndef ELIMINARE_H
#define ELIMINARE_H
 struct lista *eliminare(struct lista *l,int x)
 {
	struct lista *capat;
	if (l->k == x) return(l->next);
	else
	{ capat=l;
	  while ((l->next) && (l->next->k!=x))
		  l=l->next;
	  if (l->next)
		  l->next=l->next->next;
	  return(capat);
	 }
  }
 #endif