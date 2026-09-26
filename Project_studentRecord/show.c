#include"header.h"
void st_show(s *head)
{
	printf("---------------------------------------------------\n");
	printf("|Rollno\t|Name\t\t|Mark\n");
	printf("---------------------------------------------------\n");
	while(head!=NULL)
	{
		printf("|%d\t|%s\t\t|%f\n",head->rollno,head->name,head->mark);
		head=head->next;
	}
	printf("---------------------------------------------------\n\n");
}



