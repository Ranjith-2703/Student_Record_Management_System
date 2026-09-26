#include"header.h"
void st_save(s *head)
{
	FILE *fp=fopen("Student","w");
	
	int size=sizeof(s)-sizeof(s *);
	while(head!=NULL)
	{
	fprintf(fp,"%d %s %f\n",head->rollno,head->name,head->mark);
	head=head->next;
	}

	puts("saved...");

	fclose(fp);
}

