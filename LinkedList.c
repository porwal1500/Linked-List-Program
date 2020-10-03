#include<stdio.h>
#include<stdlib.h>
int element;
typedef struct LinkedList
{
	int data;
	struct LinkedList* link;
}LL;
LL*head=NULL;
LL* createnode()
{
	LL* node;
	node=(LL*)malloc(sizeof(LL*));
	printf("Enter element : ");
	scanf("%d",&element);
	node->data=element;
	node->link=NULL;
	return node;
}
//...........................................
void iatb()
{
	if(head==NULL)
	{
		LL* node=createnode();
		head=node;
		node->link=NULL;
		printf("First element inserted successfully\n\n");
	}
	else
	{
		LL* node=createnode();
		node->link=head;
		head=node;
		printf("Element inserted successfully\n\n");
	}
}
//...........................................
void iate()
{
	if(head==NULL)
	{
		LL* node=createnode();
		head=node;
		node->link=NULL;
		printf("First element inserted successfully\n\n");
	}
	else
	{
		LL* node=createnode();
		LL* t=head;
		while(t->link!=NULL)
			t=t->link;
		t->link=node;
		printf("Element inserted successfully\n\n");
	}
}
//...........................................
void iatSP()
{
	if(head==NULL)
	{
		printf("No element exists till now\nInserting first element\n");
		LL* node=createnode();
		head=node;
		node->link=NULL;
		printf("First element inserted successfully\n\n");
	}
	else
	{
		LL* t=head;
		printf("Enter the element after which you want to insert : ");
		scanf("%d",&element);
		while(t->data!=element)
			t=t->link;
		LL* node=createnode();
		node->link=t->link;
		t->link=node;
		printf("Element inserted successfully\n\n");
	}
}
//...........................................
void dfromb()
{
if(head==NULL)
printf("List is empty\nDeletion not possible\n\n");
else
{
LL* t;
t=head;
head=head->link;
free(t);
printf("Element deleted successfully\n\n");
}
}
//...........................................
void dfrome()
{
if(head==NULL)
printf("List is empty\nDeletion not possible\n\n");
else
{
LL* t=head;
LL* pr;
if(head->link==NULL)
{
head=NULL;
free(t);
printf("Element deleted successfully\n\n");
}
else
{
while(t->link!=NULL)
{
pr=t;
t=t->link;
}
pr->link=NULL;
free(t);
printf("Element deleted successfully\n\n");
}
}
}
//...........................................
void dfromSP()
{
if(head==NULL)
printf("List is empty\nDeletion not possible\n\n");
else
{
LL* t=head;
LL* pr;
printf("Enter the element that you want to delete : ");
scanf("%d",&element);
if(head->data==element)
{
head=head->link;
free(t);
}
else
{
while(t->data!=element)
{
pr=t;
t=t->link;
}
pr->link=t->link;
free(t);
}
}
}
//...........................................
void traverse()
{
if(head==NULL)
printf("List is empty\nNothing to traverse\n\n");
else
{
LL* t;
t=head;
while(t!=NULL)
{
printf("%d\t",t->data);
t=t->link;
}
printf("\n\n");
}
}
//...........................................
void main()
{
int choise;
printf("Select any operation :\n1)Insert at Beginning\n2)Insert at End\n3)Insert at Special place\n4)Delete from Bignning\n5)Delete from End\n6)Delete from special place\n7)Traverse\n0)Exit\n\n");
do
{
scanf("%d",&choice);
switch(choice)
{
case 1: iatb();traverse();break;
case 2: iate();traverse();break;
case 3: iatSP();traverse();break;
case 4: dfromb();traverse();break;
case 5: dfrome();traverse();break;
case 6: dfromSP();traverse();break;
case 7: traverse();
}
}
while(choise!=0);
}

