/*st_rev.c*/

/*Prgm to reverse the list*/


#include"header.h"

void rev_list(sll **p)
{
	if(*p==0)
	{
		printf("\n\033[31;1mNO DATA\033[0m\n");
		return;
	}
	int c = cnt_node(*p),i;
	sll **q, *temp=*p;
	if(c==1)
		printf("\n\033[31;1mONLY ONE RECORD AVAILABLE\033[0m\n");
	else
	{
		q = malloc(sizeof(sll *)*c);
		for(i=0; i<c; i++,temp = temp->nxt)
			q[i] = temp;
		for(i=1; i<c; i++)
			q[i]->nxt = q[i-1];
		q[0]->nxt = 0;
		*p = q[i-1];
		printf("\n\033[32;1mREVERSED THE LIST\033[0m\n");
	}
}
