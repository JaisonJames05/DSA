#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head;

void createlist(int n){
    if(n>=1){
        int data,i;
        head = (node *)malloc(sizeof(node));
        printf("Enter data of node 1 : ");
        scanf("%d",&data);
        head->data = data;
        head->next = NULL;
        node *temp = head;
        for(i=2;i<=n;i++){
            node *newnode = (node *)malloc(sizeof(node));
            printf("Enter data of node %d : ",i);
            scanf("%d",&data);
            newnode->data = data;
            newnode->next = NULL;
            temp->next = newnode;
            temp = newnode;
        }
        return;
    }
    else
        return;
}

void display(){
    node *temp = head;
    printf("Data = ");
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void add_front(int data){
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = head;
    head = temp;
    display();
}

void add_middle(int data){
    unsigned int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(pos==1) 
	{ add_front(data); 
	return; }
    node *temp = head;
    unsigned int i = 2;
    while(temp!=NULL && i<pos) 
	{ temp = temp->next; 
		i++; }
    if(temp==NULL) 
	return;
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    if(temp->next==NULL)
        newnode->next = NULL;
    else
        newnode->next = temp->next;
    temp->next = newnode;
    display();
    return;
}

void add_end(int data){
    node *temp = head, *newnode = (node *)malloc(sizeof(node));
    if(head->next==NULL){
        newnode->data = data;
        newnode->next = NULL;
        head->next = newnode;
        return;
    }
    while(temp->next!=NULL) 
	{ temp = temp->next; }
    newnode->data = data;
    newnode->next = NULL;
    temp->next = newnode;
    display();
    return;
}

void delete_front(){
    if(head!=NULL){
        node *to_del = head;
        head = head->next;
        free(to_del);
    }
    display();
    return;
}

void delete_middle(int pos){
    if(pos==1) 
	{ delete_front(); 
		return; }
    unsigned int i=2;
    node *to_del = head, *prev = NULL;
    while(to_del!=NULL && i<=pos) 
	{ 	prev = to_del; 
		to_del = to_del->next; 
		i++; }
    if(to_del==NULL) 
	return;
    if(to_del->next==NULL)
        prev->next = NULL;
    else if(to_del->next!=NULL) 
        prev->next = to_del->next;
    free(to_del);
    display();
    return;
}

void delete_end(){
    node *to_del = head, *temp = NULL;
    while(to_del->next!=NULL)
	{ temp = to_del; 
		to_del = to_del->next; }
    temp->next = NULL;
    free(to_del);
    display();
    return;
}


int main()
{
    int choice, n;
        printf("    LINKED LIST IMPLEMENTATION    \n");
        printf("----------------------------------\n");
        printf("1 : Create\n2 : Add Front\n3 : Add Middle\n4 : Add End\n");
        printf("5 : Delete Front\n6 : Delete Middle\n7 : Delete End\n8 : Display\n9 : Exit\n");
        printf("----------------------------------\n");
    do{
        printf("----------------------------------\n");
		printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : printf("\nEnter the number of elements in the list : "); 
					 scanf("%d",&n); 
					 createlist(n); 
					 break;
            case 2 : printf("\nEnter data : "); 
					 scanf("%d",&n); 
					 add_front(n); 
					 break;
            case 3 : printf("\nEnter data : "); 
					 scanf("%d",&n);
					 add_middle(n); 
					 break;
            case 4 : printf("\nEnter data : "); 
					 scanf("%d",&n); 
					 add_end(n); 
					 break;
            case 5 : delete_front(); 
					 break;
            case 6 : printf("\nEnter position : "); 
					 scanf("%d",&n); 
					 delete_middle(n); 
					 break;
            case 7 : delete_end(); 
					 break;
            case 8 : display(); 
					 break;
            case 9 : printf("EXITING FROM PROGRAM\n\n");
                	 exit(0);
            default : printf("\nInvalid choice, enter choice between (1-9)\n");
        }
        
    }while(choice!=9);
    
    return 0;
}

