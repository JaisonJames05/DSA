#include <stdio.h>

struct customer
{
    int account_no;
    char name[80];
    int balance;
    int interest;
};

void accept(struct customer[], int);
void display(struct customer[], int);


int main()
{
    struct customer data[20];
    int n;

    printf("Banking System\n\n");
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);
	display(data,n);

    return 0;
}

void accept(struct customer list[80], int s)
{
    int i;

    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);

        printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);
        printf("\nEnter balance : ");
        scanf("%d", &list[i].balance);
        list[i].interest=0.035*list[i].balance;
		list[i].balance = list[i].balance + (0.035*list[i].balance);
        
    } 
}

void display(struct customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\t\tName\t\tBalance\t\tInterest\n");
    for (i = 0; i < s; i++)
    {
        printf("\%d\t%s\t\t%d\t\t%d\n", list[i].account_no, list[i].name,
            list[i].balance,list[i].interest);
    } 
}

