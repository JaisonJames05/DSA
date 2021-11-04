#include<stdio.h>
int i,n,j,stack[25],pick,top;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("\n Enter the size of STACK:");
    scanf("%d",&n);
    printf("\n\t IMPLEMENTATION OF STACK USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&pick);
        switch(pick)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXITING THE PROGRAM ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice Out of (1/2/3/4)");
            }
                
        }
    }
    while(pick!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&j);
        top++;
        stack[top]=j;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped element is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}

