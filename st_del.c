/*st_del.c*/

/*Deleting functions*/

#include"header.h"

void dlt_roll(int roll,sll **p)
{
	sll *dlt=*p, *temp;
	while(dlt->r != roll)
	{
		temp = dlt;
		dlt = dlt->nxt;
		if(dlt==0)
		{
			printf("\n\033[35;1mRECORD on %d ROLL NO DOESN'T EXIST\033[0m\n",roll);
			temp=0;
			return;
		}
	}
	if(dlt==*p)
		*p=dlt->nxt;
	else
		temp->nxt = dlt->nxt;
	free(dlt);
	printf("\n\033[031;1mNODE DELETED\033[0m\n");
	temp=dlt=0;
}

void dlt_name(char *a,sll **p) //p=&hp, *p= hp(A)
{
	sll *dlt=*p, *pre, *temp= *p; int c1=0,f=0,roll;
	while(temp)
	{
		if(strcmp(temp->n,a)==0)
		{
			c1++;
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
	{
		while(dlt)
		{
			if(strcmp(dlt->n,a)==0)
			{
				if(dlt==*p)
					*p = dlt->nxt;
				else
					temp->nxt = dlt->nxt;
				free(dlt);
				printf("\n\033[031;1mNODE DELETED\033[0m\n");
				dlt=temp=0;
				return;
			}
			temp = dlt;
			dlt = dlt->nxt;	
		}
	}	
	else
	{
		printf("\n\033[33mChoose roll to identify student: \033[0m");
		scanf("%d", &roll);
		dlt_roll(roll,p);
	}					
}



void dlt_node(sll **p) //*p=hp
{
	
	if(*p==0)
	{
		printf("\n\033[31;1mNO DATA\033[0m\n");
		return;
	}
	printf("\n\033[33mChoose:\na. Delete by roll\nb. Delete by name\033[0m\n");
	char ch,name[20];; int roll;
	scanf(" %c", &ch); //space bfre %c-imp
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("\n\033[33mEnter roll: \033[0m");
			scanf("%d", &roll);
			dlt_roll(roll,p);
			break;
		case 'b':
		case 'B':
			printf("\n\033[33mEnter name: \033[0m");
			scanf(" %[^\n]", name);
			dlt_name(name,p);
			break;
		default :
			printf("\n\033[31;1mINVALID OPTION\033[0m\n");
	}
}
void dlt_all(sll **p) //*p=hp (dlt from first node)
{
    if(*p==0)
    {
        printf("\n\033[31;1mNO DATA\033[0m\n");
        return;
    }
    sll *dlt=*p; int i=0;
    printf("\n\033[31;4mDeleting all nodes:\033[0m");
    while(dlt)
    {
        *p = dlt->nxt;
        free(dlt);
        printf("\ndeleted node %d;",i++);
        sleep(1);
        dlt = *p;
    }
    printf("\n");
}
