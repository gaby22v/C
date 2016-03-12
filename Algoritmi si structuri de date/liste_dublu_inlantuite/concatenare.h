#ifndef CONCATENARE_H
#define CONCATENARE_H
struct lista *concatenare(struct lista *l1,struct lista *l2)
{
	struct lista *l;
	if (!l1)
		return(l2);
	else
		if (!l2) 
			return(l1);
		else
			{
				l=l1;
			 while(l->next)
				 l=l->next;
			 l->next=l2;
			 return(l1);
			 }
}
#endif