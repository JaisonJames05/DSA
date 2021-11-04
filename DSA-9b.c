#include<stdio.h>
#include<stdlib.h>
struct node
{
	int val;
	struct node *next;
};
struct node *front;
struct node *rear;
void enqueue()
{
	int val;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOVERFLOW\n");
		return;
	}
	else
	{
		printf("\n Enter the value to be enqueued : ");
		scanf("%d",&val);
		ptr->val=val;
		if(front==NULL)
		{
			front=ptr;
			rear=ptr;
			front->next=ptr;
			rear->next=NULL;
		}
		else
		{
			rear->next=ptr;
			rear=ptr;
			rear->next=NULL;
		}
		printf("\n%d has been inserted to the Queue",val);
	}
}
void dequeue()
{
	
	struct node *ptr;
	if(front==NULL)
	{
		printf("\nUNDERFLOW");
		return;
	}
	else
	{
		ptr=front;
		front=front->next;
		free(ptr);
		printf("\nFirst element has been deleted from Queue");
	}
}
void display()
{
	struct node *ptr;
	ptr=front;
	if(front==NULL)
	{
		printf("\nQUEUE IS EMPTY\n");
	}
	else
	{
		printf("\nQUEUE = ");
		while(ptr!=NULL)
		{
			printf("%d->",ptr->val);
			ptr=ptr->next;
		}printf("NULL\n");
	}
}
void main()
{
	int choice;
	printf("\nQUEUE IMPLEMENTATION USING LINKED LIST");
	printf("\n======================================");
	printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY MENU\n4.EXIT");
	while(choice!=4)
	{
		printf("\n======================================");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					enqueue();
					display();
					break;
				}
			case 2:
				{
					dequeue();
					display();
					break;
				}
			case 3:
				{
					printf("\nQUEUE IMPLEMENTATION USING LINKED LIST");
					printf("\n======================================");
					printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY MENU\n4.EXIT");
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

