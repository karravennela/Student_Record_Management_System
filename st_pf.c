/*st_pf.c*/

/*Prgm to print the records*/


#include"header.h"

void pf_node(sll *p) //p=hp 
{	
	if(p==0)
	{
		printf("\n\033[31;1mNO DATA\033[0m\n");
		return;
	}
	printf("\n\n\033[33;1;4m******STUDENT RECORDS******\033[0m\n\n");
	printf("\033[33;1mROLL\tNAME\tPERCENTAGE\033[0m");
	while(p)
	{
		printf("\n %d\t %s\t %g",p->r,p->n,p->m);
		p = p->nxt;
	}
	printf("\n");

}
