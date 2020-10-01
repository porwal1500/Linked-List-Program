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
