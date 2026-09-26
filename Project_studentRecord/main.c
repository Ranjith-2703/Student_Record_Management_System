#include"header.h"
int main()
{
	s *head=NULL;
	st_read(&head);
	char ch;
	while(1)
	{
		printf("\n");
		puts("---------------------------------------------------");
		puts("            ****STUDENT RECORD MENU****");
		puts("---------------------------------------------------");
		printf("\n");		
		printf("A/a : Add a new record\nD/d : Delete a record\nS/s : Show the list\nM/m : Modify a record\nV/v : Save\nT/t : Sort the list\nE/e : exit\n\n");
		puts("---------------------------------------------------");
		printf("\n");
	        
		puts("Enter the choice:");	
		scanf(" %c",&ch);
		ch=toupper(ch);

		switch(ch)
		{
			case('A'):
				  st_add(&head);
			          break;

			case('D'):
				  st_del(&head);
				  break;

		        case('S'):
			          st_show(head);
				  break;

		        case('M'):
				
				  st_mod(head);
				  break;

		        case('V'):
				  st_save(head);
				  break;

			case('T'):
				  st_sort(head);
				  break;

		        case('E'):
				  char ch;
				  puts("S/s Save and exit");
				  puts("E/e Exit without saving");
				  scanf(" %c",&ch);
				  ch=toupper(ch);
				  if(ch=='S')
				  st_save(head);
				  else
					  return 0;
		}
	}
}

