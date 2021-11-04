#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CAPACITY 5

int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;
unsigned int front = 0;

int enqueue(int data);
int dequeue();
int isFull();
int isEmpty();
void display();

int main()
{
    int pick, data;

        printf("--------------------------------------\n");
        printf("IMPLEMENTATION OF QUEUE USING ARRAY  \n");
        printf("--------------------------------------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
		printf("4. Exit\n");
        printf("--------------------------------------\n");
    while (1)
    {
        printf("Select an option: ");

        scanf("%d", &pick);

        switch (pick)
        {
            case 1:
                printf("\nEnter data to enqueue: ");
                scanf("%d", &data);
                if (enqueue(data))
                    printf("Element added to queue.");
                else
                    printf("Queue is full.");

                break;

            case 2:
                data = dequeue();
                if (data == INT_MIN)
                    printf("Queue is empty.");
                else
                    printf("Data => %d", data);

                break;
            
			case 3:
				{
					display();
					break;    
				}
			
			case 4:
                printf("EXITING FROM PROGRAM\n\n");
                exit(0);
        
            default:
                printf("Please Enter a Valid Choice Out of (1/2/3/4/5)\n");
                break;
        }

        printf("\n\n");
    }
}
int isFull()
{
    return (size == CAPACITY);
}

int isEmpty()
{
    return (size == 0);
}
int enqueue(int data)
{
    
    if (isFull()) 
    {
        return 0;
    }
    rear = (rear + 1) % CAPACITY;
	size++;
    queue[rear] = data;
    return 1;
}
int dequeue()
{
    int data = INT_MIN;
    if (isEmpty())
    {
        return INT_MIN;
    }
    data = queue[front];
    front = (front + 1) % CAPACITY;
    size--;

    return data;
}
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d \n", queue[i]);
        printf("\n");
    }

} 


