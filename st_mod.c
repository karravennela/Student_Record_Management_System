/*stu_mod.c*/

/*Prgm to search a node according to roll, name and percentage...*/

#include"header.h"


void mod_data(sll *mod) //mod=p (A)
{ 	
	printf("\n\n\033[33;1mChoose:\na. Modify name\nb. Modify percentage\nc. Modify both name and percentage\033[0m\n");
	char ch;
	scanf(" %c", &ch); //space bfre %c-imp
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("\n\033[33mEnter name: \033[0m");
			scanf(" %[^\n]",mod->n);
			printf("\n\033[32;1mMODIFIED NAME\033[0m\n");
			break;
		case 'b':
		case 'B':
			printf("\n\033[33mEnter percentage: \033[0m");
			scanf(" %f",&mod->m);
			printf("\n\033[32;1mMODIFIED PERCENTAGE\033[0m\n");
			break;
		case 'c':
		case 'C':
			printf("\n\033[33mEnter name: \033[0m");
			scanf(" %[^\n]",mod->n);
			printf("\n\033[33mEnter percentage: \033[0m");
			scanf(" %f",&mod->m);

			printf("\n\033[32;1mMODIFIED BOTH NAME AND PERCENTAGE\033[0m\n");
			break;

		default :
			printf("\n\033[31;1mINVALID OPTION\033[0m\n");
	}
}
void srch_roll(int roll,sll *p) //p=hp
{
        int f=0; 
	while(p)
	{
		if(p->r == roll)
		{
			mod_data(p); 
			//p is holding address of node that is to be modified 
			f=1;
		}
		p = p->nxt;
	}
	if(f==0)
		printf("\n\033[35;1mRECORD on %d ROLL NO DOESN'T EXIST\033[0m\n",roll);
}

void srch_per(float per,sll *p)
{
        int f=0, c1=0, roll; 
	sll *temp=p,*mod;
	while(temp)
	{
		if(temp->m == per)
		{
			c1++;
			mod=temp;
			printf("\n%d %s %g",temp->r,temp->n,temp->m);
			sleep(1);
			f=1;
		}
		temp = temp->nxt;
	}
	printf("\n");
	if(f==0)
	{
		printf("\n\033[35;1mRECORD on %g PERCENTAGE DOESN'T EXIST\033[0m\n",per);
		return;
	}
	if(c1==1)
		mod_data(mod); 
	//mod is holding address of node that is to be modified 
	else
	{
		printf("\n\033[33mChoose roll to identify student: \033[0m");
		scanf("%d", &roll);
		srch_roll(roll,p);
	} 
}

void srch_name(char *a,sll *p)
{
        int f=0, c=cnt_node(p), c1=0, roll;
	sll *temp = p, *mod;
	while(temp)
	{
		if(strcmp(temp->n,a)==0)
		{
			c1++;
			mod = temp;
			printf("\n%d %s %g",temp->r,temp->n,temp->m);
			sleep(1);
			f=1;
		}
		temp = temp->nxt;
	}
	printf("\n");
	if(f==0)
	{  
		printf("\n\033[35;1mRECORD on %s NAME DOESN'T EXIST\033[0m\n",a);
		return;
	}
	if(c1==1)
		mod_data(mod); 
	//mod is holding address of node that is to be modified 
	else
	{
		printf("\n\033[33mChoose roll to identify student: \033[0m");
		scanf("%d", &roll);
		srch_roll(roll,p);
	}
}

void srch_node(sll *p)
{
        if(p==0)
	{
		printf("\n\033[31;1mNO DATA\033[0m\n");
		return;
	}
	printf("\n\033[33;1mChoose:\na. Search by roll\nb. Search by name\nc. Search by percentage\033[0m\n");
	char ch,name[20]; int roll; float per;
	scanf(" %c", &ch); //space bfre %c-imp
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("\n\033[33mEnter roll: \033[0m");
			scanf("%d", &roll);
			srch_roll(roll,p);
			break;
		case 'b':
		case 'B':
			printf("\n\033[33mEnter name: \033[0m");
			scanf(" %[^\n]", name);
			srch_name(name,p);
			break;
		case 'c':
		case 'C':
			printf("\n\033[33mEnter percentage: \033[0m");
			scanf("%f", &per);
			srch_per(per,p);
			break;

		default :
			printf("\n\033[31;1mINVALID OPTION\033[0m\n");
	}
}

