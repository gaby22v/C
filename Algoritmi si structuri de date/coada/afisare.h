#ifndef AFISARE_H
#define AFISARE_H
void afisare(QUEUE q)
{ 
	LIST p;
printf("\n\n Coada este: ");
p=q->front;
if(empty(q))
	printf(" vida \n ");
else
{ 
	do
{ 
	printf("%d ",p->k);
p=p->next;
}
while (p!=NULL);
}
printf(" \n ");
}
#endif