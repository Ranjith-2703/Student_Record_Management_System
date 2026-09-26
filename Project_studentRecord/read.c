#include"header.h"
void st_read(s **head)
{

	FILE *fs=fopen("Student","r");
	int size=sizeof(s)-sizeof(s *);

	while(1)
	{
		s *nn=(s *)malloc(sizeof(s));
		if(fscanf(fs,"%d %s %f\n",&(nn->rollno),(nn->name),&(nn->mark)) !=EOF)
		{
		
			if(*head==NULL)
		        {
			*head=nn;
			nn->next=NULL;
	               	}

		         else
		        {
			 s *temp=*head;
		        while(temp->next!=NULL)
		        temp=temp->next;

		        temp->next=nn;
		        }
		 }
		else
			break;

	}
	fclose(fs);
}

