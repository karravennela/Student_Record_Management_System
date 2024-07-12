/*st_add.c*/

/*Adding node to sll according to roll (rollno taken automatically) and if any node deleted then assigning the least available roll to it...*/

#include"header.h"

//ASSIGN ROLL AUTOMATICALLY
int get_roll(sll *p)
{
	int c=1;
	while(p)
	{
		if(p->r != c)
			break;
		c++;
		p=p->nxt;
	}
	return c;
}
//COUNT NODE
int cnt_node(sll *p)
{
	int c=0;
	while(p)
	{
		c++;
		p = p->nxt;
	}
	return c;
}
void read_file(sll **p) //p=&hp, *p=hp(0/A)
{
	sll *new, *lst;
	FILE *rp;
	rp = fopen("student_read.dat","r");
	while(1)
	{
		new = (sll *)malloc(sizeof(sll));
		if(fscanf(rp,"%d%s%f",&new->r,new->n,&new->m) == EOF)
		{	
			free(new);
			break;
		}
		new->nxt = 0;
		if(*p==0)
			*p = new;
		else
		{		
			lst = *p;
			while(lst->nxt)
				lst = lst->nxt;		
			lst->nxt = new;
		}		
	}
}
//ADD_NODE
void add_node(sll **p) //p=&hp *p=hp(0/A)
{
	sll *new, *temp;
	new = (sll *)malloc(sizeof(sll));
	sort_roll(*p);
	new->r = get_roll(*p);
	printf("\n\033[33mEnter student name & percentage:\033[0m\n");
	scanf("%s%f",new->n, &new->m);
	if((*p == 0) || ((*p)->r > new->r))
	{
		new->nxt = *p;
		*p = new;
	}
	else
	{
		temp = *p;
		while((temp->nxt != 0) && (temp->nxt->r < new->r))
			temp = temp->nxt;
		new->nxt = temp->nxt;
		temp->nxt = new;
	}
}
