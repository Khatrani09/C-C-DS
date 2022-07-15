#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};

void printlist(struct node* n)
{ 
    struct node* last;
    while(n != NULL)
	{
        printf(" %d->",n->data);
        last = n;
        n = n->next;
		
    }
    if(n == NULL)
        printf("NULL\n");
}
void insertfront(struct node**head,int newdata)
{
    struct  node *prev = (struct node*)malloc(sizeof(struct node));
    prev->data = newdata;
    prev->next = *head;
    *head = prev;
}
void insertback(struct node**head,int newdata)
{
    struct  node* prev = (struct node*)malloc(sizeof(struct node));
    prev->data = newdata;
    prev->next = NULL;

    if(*head==NULL)
    {
        *head = prev;
        return;
    }
    struct  node* last = *head;
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = prev;   
}
void deletefront(struct node **head)
{
     if(head==NULL)
        printf("\nlist is empty");
    struct node *prev=*head;
    *head= prev->next;
    free(prev);
}
void deletback(struct node **head)
{
    struct node *prev=*head;
    if(prev->next == NULL)
    {
        if(head==NULL)
            printf("\nlist is empty");
        prev=*head;
        *head= prev->next;
        free(prev);
        return;
    }
    else
    {
        while(prev->next->next != NULL)
        {
            prev=prev->next;
        }
        prev->next = NULL;
        free(prev->next);
    }
}
int main()
{
    struct  node *head=NULL;
    // struct  node *one;
    // struct  node *second;
    // struct  node *third;

    // one = malloc(sizeof(struct node));
    // second = malloc(sizeof(struct node));
    // third = malloc(sizeof(struct node));

    // one->data = 11;
    // second->data = 22;
    // third->data = 33;

    // one->next = second;
    // one->prev = NULL;

    // second->next = third;
    // second->prev = one;


    // third->next = NULL;
    // third->prev = second;



    // head = one ;

    int choice,x;
    do
    {
        printf("\n----menu----");
		printf("\n1.Insert Beginning\n2.Insert End\n3.Delete front\n4.Delete back\n9.Print\n0.Exit");
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
                printf("Insert Value from end:");
                scanf("%d",&x);
                insertback(&head , x);
                break;
            case 3:
                deletefront(&head);
                break;
            case 4:
                deletback(&head);
                break;
            case 9:
                printlist(head);
                break;
        }
    } while (choice!=0);

}