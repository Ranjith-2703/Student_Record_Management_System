#include"header.h"
void st_sort(s *head)
{
	s *temp=head;
	s *name=head;
	s summa;
	char ch;
	puts("N/n : Sort by Name");
        puts("P/p : Sort by Percentage");
	puts("Enter choice:");
	scanf(" %c",&ch);
	ch=toupper(ch);
	int count=0;
	while(temp!=NULL)
	{
	temp=temp->next;
	count++;
	}

	int size=sizeof(s)-sizeof(s *);
	s *arr[count];
	for(int i=0;name!=NULL;i++)
	{
	arr[i]=name;
	name=name->next;
        }
	switch(ch)
	{
		case('N'):
			for(int i=0;i<count;i++)
				for(int j=0;j<count-1;j++)
				{
					if(strcmp(arr[j]->name,arr[j+1]->name)>0)
					{
					memcpy(&summa,arr[j],size);
					memcpy(arr[j],arr[j+1],size);
					memcpy(arr[j+1],&summa,size);
					}
				}
			puts("Name sorting completed:");
			break;

		case('P'):
			for(int i=0;i<count;i++)
				for(int j=0;j<count-1;j++)
				{
					if(arr[j]->mark < arr[j+1]->mark)
					{
						memcpy(&summa,arr[j],size);
						memcpy(arr[j],arr[j+1],size);
						memcpy(arr[j+1],&summa,size);
					}
				}
			puts("Mark sorting completed:");
			break;
	}
}





