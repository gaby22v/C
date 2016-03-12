#ifndef TIPAR_H_INCLUDED
#define TIPAR_H_INCLUDED
void tipar_ldi(struct lista *l)
	{struct	lista *p;
	 printf("\n\n Lista : ");
	 if(l)
			{p=l;
			 do
				  {printf("%d=>",p->k);
					p=p->next;}
			 while (p!=l);
					printf("%d!!",l->k);/*mai afisam o data primul element
											  pentru a arata ca lista este circulara*/
			 }
	else printf("vida");
 }


#endif // TIPAR_H_INCLUDED
