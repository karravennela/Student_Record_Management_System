/*st_save.c*/

/*Prgm to save data into "student.dat"*/


#include"header.h"

void save_file(sll *p)
{
	
	if(p==0)
	{
		printf("\n\033[31;1mNO DATA\033[0m\n");
		return;
	}
	FILE *fp,*rp; int i=1;
	fp = fopen("student.dat","w");
	rp = fopen("student_read.dat","w");
	fprintf(fp,"%s","Studentrecords:\n");
	while(p)
	{
		fprintf(fp,"%s%d%s","\nStudent",i,":\n");
		fprintf(fp,"Roll no:%d\nName: %s\nMarks: %g\n",p->r,p->n,p->m);
		fprintf(rp,"%d %s %f\n",p->r,p->n,p->m);
		i++;
		p = p->nxt;
	}
	printf("\n\033[32;1mFILE SAVED\033[0m\n");
	fclose(fp);
	fclose(rp);
}
void save(sll *p) //p=hp
{
	printf("\n\033[33;1mChoose:\na. Save & exit\nb. Exit w/o saving\033[0m\n");
	char ch;
	scanf(" %c", &ch); //space bfre %c-imp
	switch(ch)
	{
		case 'a':
		case 'A':
			save_file(p);
			exit(0);
			break;
		case 'b':
		case 'B':
			exit(0);
			break;
		default :
			printf("\n\033[31;1mINVALID OPTION\033[0m\n");
	}

}
