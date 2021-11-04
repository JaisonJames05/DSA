#include<stdio.h>
#include<math.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    char *e;
    int n,A,B,num;
    printf("MADE BY :: 2060354-JAISON JAMES"); 
    printf("\n\n\n\nEnter the postfix expression :: ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e-48;
            push(num);
        }
        else
        {
            A = pop();
            B = pop();
            switch(*e)
            {
            case '+':
            {
   	            n = A + B;
                break;
            }
            case '-':
            {
                n = B - A;
                break;
            }
            case '*':
            {
                n = A * B;
                break;
            }
            case '/':
            {
                n = B / A;
                break;
            }
            case '^':
            {
            	n = pow(B,A); 
            	break;
			}
            }
            push(n);
        }
        e++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
    return 0;
}
