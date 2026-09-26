#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct st
{
	int rollno;
	char name[20];
	float mark;
	struct st *next;
}s;
void st_add(s **);
void st_show(s *);
void st_del(s **);
void st_save(s *);
void st_read(s **);
void st_mod(s *);
void st_sort(s *);

