#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
void create(int x);
void display();
void main()
{
	int n,r;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		create(r);
		n=n/10;
	}
	display();
	getch();
}
void create(int x)
{
	struct node *new,*current;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=x;
	new->next=NULL;
	if(start==NULL)
	{
		start=new;
		current=new;
	}
	else
	{
		current=new;
		current->next=start;
		start=current;
	}
}
void display()
{
	struct node *new;
	printf("The Linked List is:");
	new=start;
	while(new!=NULL)
	{
		if(new->next==NULL)
			printf("%d",new->data);
		else
			printf("%d--->",new->data);
		new=new->next;
	}
}


