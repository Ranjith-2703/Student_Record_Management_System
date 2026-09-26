#include"header.h"
void st_add(s **head)
{
	static int i;
	s *temp=*head;
	if(temp==NULL)
	{
	 i=1;
	}

        else
	{
	while(temp->next!=NULL)
	temp=temp->next;

	i=(temp->rollno)+1;
	}
	if((*head)==NULL)
	{
		s *new=(s *)malloc(sizeof(s));
		new->rollno=i++;
		puts("Enter the Name and Mark:");
		scanf("%s%f",new->name,&new->mark);
		new->next=NULL;
		(*head)=new;
	}
	else
	{
	   s *temp=*head;
	   while(temp->next!=NULL)
	   temp=temp->next;

	   s *new=(s *)malloc(sizeof(s));
	   new->rollno=i++;
	   puts("Enter the Name and Mark:");
	   scanf("%s%f",new->name,&new->mark);
	   temp->next=new;
	   new->next=NULL;
	}
}

