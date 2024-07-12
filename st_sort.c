/*st_sort.c*/

/*Prgm to sort nodes according to roll, name and percentage...*/


#include"header.h"

void sort_roll(sll *p)
{
	int i,j, c= cnt_node(p);
	sll temp, *p2, *p1=p;
	for(i=0; i<c-1; i++)
	{
		p2 = p1->nxt;
		for(j=0; j<c-1-i; j++)
		{
			if(p1->r > p2->r)
			{
				temp.r = p1->r;
				strcpy(temp.n,p1->n);
				temp.m = p1->m;

				p1->r = p2->r;
				strcpy(p1->n,p2->n);
				p1->m = p2->m;

				p2->r = temp.r;
				strcpy(p2->n,temp.n);
				p2->m = temp.m;
			}
			p2 = p2->nxt;
		}
		p1 = p1->nxt;
	}
}
void sort_name(sll *p) //A-Z...(bubble sort)
{
	int i,j, c =cnt_node(p);
	sll temp, *p2, *p1=p; //p1 A
	/* At first, p1 pointing to 1st node
	   p2 pointing to 2nd node */
	for(i=0; i<c-1; i++)
	{
		p2 = p1->nxt; //p2 B C
		for(j=0; j<c-1-i; j++)
		{
			if(strcmp(p1->n,p2->n)>0) //j,j+1
			{
				temp.r = p1->r;
				strcpy(temp.n,p1->n);
				temp.m = p1->m;

				p1->r = p2->r;
				strcpy(p1->n,p2->n);
				p1->m = p2->m;

				p2->r = temp.r;
				strcpy(p2->n,temp.n);
				p2->m = temp.m;
			}
			p2 = p2->nxt; 
		}
		p1 = p1->nxt; //p1 B
	}
	printf("\n\033[32;1mSORTED THE DATA BY NAME\033[0m\n");
}

void sort_per(sll *p) //Highest percentage first (selection sort)
{
	int i,j, c =cnt_node(p);
	sll temp, *p1=p, *p2; //p1 A
	/* At first, p1 pointing to 1st node
	   p2 pointing to 2nd node */
	for(i=0; i<c-1; i++)
	{
		p2 = p1->nxt; //p2 B 
		for(j=i+1; j<c; j++)
		{
			//p1; j=1,b j=2,c
			if(p1->m < p2->m)
			{
				temp.r = p1->r;
				strcpy(temp.n,p1->n);
				temp.m = p1->m;

				p1->r = p2->r;
				strcpy(p1->n,p2->n);
				p1->m = p2->m;

				p2->r = temp.r;
				strcpy(p2->n,temp.n);
				p2->m = temp.m;
			}
			p2 = p2->nxt; //j=1,c j=2,d j=3,0
		}
		p1 = p1->nxt; //p2 B
	}
	printf("\n\033[32;1mSORTED THE DATA BY PERCENTAGE\033[0m\n");   
}

void sort_data(sll *p)
{
	if(p==0)
	{
		printf("\nNO DATA\n");
		return;
	}
	char ch;
	printf("\n\033[33;1mChoose:\na. Sort by name\nb. Sort by percentage\033[0m\n");
	scanf(" %c",&ch);
	if(ch=='a' || ch == 'A')
		sort_name(p);
	else if(ch=='b' || ch == 'B')
		sort_per(p);
	else
		printf("\n\033[31;1mINVALID OPTION\033[0m\n");
}
