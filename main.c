/*main.c*/

#include"header.h"

int main()
{
	sll *hp=0; 
	char op;
	read_file(&hp);
	while(1)
	{		
		printf("\n\033[36;1;4m*******STUDENT RECORD MENU*******\033[0m\n");
		printf("\n\033[36;1ma/A: Add new record \nd/D: Delete a record \ns/S: Show the list\nm/M: Modify a record \nv/V: Save \ne/E: Exit \nt/T: Sort the list \ni/I: Delete all the records \nr/R: Reverse the list\033[0m\n");
		printf("\n\033[33mEnter your choice: \033[0m");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a'  :
			case 'A'  : add_node(&hp);  break;
			case 'd'  : 
			case 'D'  : dlt_node(&hp);  break;
			case 's'  : 
			case 'S'  : pf_node(hp);    break;
			case 'm'  : 
			case 'M'  : srch_node(hp);  break;
			case 'v'  :
			case 'V'  : save(hp);       break;
			case 'e'  :
			case 'E'  : return 0;
			case 't'  :
			case 'T'  : sort_data(hp); break;
			case 'i'  : 
			case 'I'  : dlt_all(&hp); break;
			case 'r'  : 
			case 'R'  : rev_list(&hp);  break;
			default   : printf("\n\n\033[31;1mINVALID OPTION\033[0m\n"); break;
		}
	}
}
