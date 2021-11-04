#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
	int val;
	struct node *next;
};
struct node *head;
void main()
{
	int choice;
	printf("\nSTACK IMPLEMENTATION USING LINKED LIST");
	printf("\n======================================");
	printf("\n1.PUSH\n2.POP\n3.DISPLAY MENU\n4.EXIT");
	while(choice!=4)
	{
		printf("\n======================================");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					display();
					break;
				}
			case 2:
				{
					pop();
					display();
					break;
				}
			case 3:
				{
					printf("\nSTACK IMPLEMENTATION USING LINKED LIST");
					printf("\n======================================");
					printf("\n1.PUSH\n2.POP\n3.DISPLAY MENU\n4.EXIT");
					break;
				}
			case 4:
				{
					printf("\nEXITING THE PROGRAM.....");
					break;
				}
			default:
				{
					printf("\n Please enter choice between (1-4)");
				}
		}
		
	}
}
void push()
{
	int val;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("NOT ABLE TO PUSH THE ELEMENT");
	}
	else
	{
		printf("\n Enter the value to be pushed : ");
		scanf("%d",&val);
		if(head==NULL)
		{
			ptr->val=val;
			ptr->next=NULL;
			head=ptr;
		}
		else
		{
			ptr->val=val;
			ptr->next=head;
			head=ptr;
		}
		printf("\n%d has been pushed to the Stack",val);
	}
}
void pop()
{
	int item;
	struct node *ptr;
	if(head==NULL)
		{
			printf("\nSTACK UNDERFLOW");		
		}
		else
		{
			item=head->val;
			ptr=head;
			head=head->next;
			free(ptr);
			printf("\n%d has been popped from Stack",item);
		}
}
void display()
{
	int i;
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\nSTACK IS EMPTY\n");
	}
	else
	{
		printf("\nSTACK = ");
		while(ptr!=NULL)
		{
			printf("%d->",ptr->val);
			ptr=ptr->next;
		}printf("NULL\n");
	}
}
