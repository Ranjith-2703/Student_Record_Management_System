#include"header.h"
void st_roll(s **);
void st_name(s **);
void st_del(s **head)
{
	if((*head)==NULL)
	{
		puts("no data to delete");
		return;
	}
	char ch;
	puts("R/r : Delete using Rollno\nN/n :Delete using Name\n");
	puts("Enter the choice:");
	scanf(" %c",&ch);
	ch=toupper(ch);
	switch(ch)
	{
		case('R'):
			st_roll(head);
			break;
		case('N'):
			st_name(head);
			break;
	}
}
void st_roll(s **head)
{
	s *temp=(*head);
	int n;
	puts("Enter the Rollno to Delete");
	scanf("%d",&n);

	if(temp->rollno == n)
	{
		(*head)=temp->next;
		free(temp);
		return;
	}
	else
	{
		while(temp->next->rollno != n)
		temp=temp->next;

		s *summa=temp->next;
		temp->next=summa->next;
		free(summa);
	}
}
void st_name(s **head)
{
	s *tem=(*head);
	char s[20];
	puts("Enter the Name:");
	scanf("%s",s);


	printf("---------------------------------------\n");
	printf("Rollno\tName\tMark\n");
	printf("---------------------------------------\n");

	while(tem!=NULL)
	{
		if((strcmp(s,tem->name)==0))
		printf("%d\t%s\t%f\n",tem->rollno,tem->name,tem->mark);
		tem=tem->next;
	}
	printf("---------------------------------------\n");
	st_roll(head);
}

