#include<stdio.h>

#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void menu()
{
    printf("\n*** link list ***");
    printf("\n1.Insert Beginning");
    printf("\n2.Insert Mid");
    printf("\n3.Insert End");
    printf("\n4.Delete front");
    printf("\n5.Delete Middle");
    printf("\n6.Delete back");
    printf("\n9.Print");
    printf("\n0.Exit");
    printf("\n*********");
}

void insertfront(struct node**head,int newdata)
{
    struct  node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = newdata;
    temp->next = *head;
    *head = temp;
}

void insertmid(struct node* prev,int newdata)
{
    struct  node *temp = (struct node*)malloc(sizeof(struct node));
    if(prev == NULL)
    {
        printf("\nprev can not be null");
        return;
    }
    temp->data = newdata;
    temp->next = prev->next;
    prev->next = temp;
}

void insertback(struct node**head,int newdata)
{
    struct  node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = newdata;
    temp->next = NULL;

    if(*head==NULL)
    {
        *head = temp;
        return;
    }
    struct  node* last = *head;
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = temp;   
}

void deletefront(struct node **head)
{
     if(head==NULL)
        printf("\nlist is empty");
    struct node *temp=*head;
    *head= temp->next;
    free(temp);
}

void delete_middle(struct node **head,int key)
{
    struct node *temp=*head,*prev;
    if(temp!=NULL&&temp->data==key)                       
    {
        *head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=key)                   
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    return;
    prev->next=temp->next;
    free(temp);
}

void deletback(struct node **head)
{
    struct node *temp=*head;
    if(temp->next == NULL)
    {
        if(head==NULL)
            printf("\nlist is empty");
        temp=*head;
        *head= temp->next;
        free(temp);
        return;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = NULL;
        free(temp->next);
    }
}

void printlist(struct node* n)
{
    while(n != NULL){
        printf(" %d",n->data);
        n = n->next;
    }
}

int main()
{
    struct  node *head = (struct node*)malloc(sizeof(struct node*));
    struct  node *second = (struct node*)malloc(sizeof(struct node*));
    struct  node *third = (struct node*)malloc(sizeof(struct node*));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    printlist(head);

    int choice,x;
    do
    {
        menu();
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1: 
                printf("Insert Value from Beginning:");
                scanf("%d",&x);
                insertfront(&head,x);
                break;
            case 2:
                printf("\nEnter value :");
                scanf("%d",&x);
                insertmid(head->next,x);
                break;
            case 3:
                printf("Insert Value from end:");
                scanf("%d",&x);
                insertback(&head , x);
                break;
            case 4:
                deletefront(&head);
                break;
            case 5:
                printf("Enter value which you want to delete:");
                scanf("%d",&x);
                delete_middle(&head,x);
                break;
            case 6:
                deletback(&head);
                break;
            case 9:
                printlist(head);
                break;
        }
    } while (choice!=0);

}