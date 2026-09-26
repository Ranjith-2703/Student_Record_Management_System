#include"header.h"
void st_ro(s *);
void st_na(s *);
void st_per(s *);
void st_mod(s *head)
{
	char ch;
	puts("R/r : Roll Number");
        puts("N/n : Name");
        puts("P/p : Percentage");
	puts("Enter the choice");
	scanf(" %c",&ch);
	ch=toupper(ch);
	switch(ch)
	{
		case('R'):
			st_ro(head);
			break;
		case('N'):
			st_na(head);
		        break;
		case('P'):
			st_per(head);
		        break;
	}
}
void st_ro(s *head)
{
	int n;
	puts("Enter the Rollno:");
	scanf("%d",&n);
	while(head->rollno!= n)
	head=head->next;

	puts("-----------------------------------------------------");
	printf("Rollno\tName\t\tMark\n");
	puts("-----------------------------------------------------");
	printf("%d\t%s\t\t%f\n",head->rollno,head->name,head->mark);
	char c;
	puts("N/n : Name");
        puts("P/p : Percentage");
	puts("Enter the choice:");
	scanf(" %c",&c);
	c=toupper(c);
	switch(c)
	{
		case('N'):
			  //char s[20];
			  puts("Enter the name to modify");
			  scanf("%s",(head)->name);
			  break;
	        case('P'):
			  puts("Enter the percentage");
			  scanf("%f",&(head)->mark);
	}
}
void st_na(s *head)
{
	s *temp=head;
	char s[20];
	puts("Enter the Name");
	scanf("%s",s);
	puts("-----------------------------------------------------");
	printf("Rollno\tName\t\tMark\n");
	puts("-----------------------------------------------------");
	while(head!=NULL)
	{
		if(strcmp(head->name,s)==0)
		printf("%d\t%s\t\t%f\n",head->rollno,head->name,head->mark);

		head=head->next;
	}
	st_ro(temp);
}
void st_per(s *head)
{
	s *temp=head;
	float f;
	puts("Enter the Mark");
	scanf("%f",&f);
        puts("-----------------------------------------------------");
        printf("Rollno\tName\t\tMark\n");
	puts("-----------------------------------------------------");
	while(head!=NULL)
	{
		if(f==head->mark)
		printf("%d\t%s\t\t%f\n",head->rollno,head->name,head->mark);

		head=head->next;
	}
	st_ro(temp);
}







