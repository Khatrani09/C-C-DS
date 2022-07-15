#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void print(struct node *head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("\nElement:%d",ptr->data);
        ptr=ptr->next;
    }
}
void insert_end(struct node **head_ref,int new_data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    struct node *ptr=*head_ref;
    temp->data=new_data;
    temp->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=temp;
    return;
}
void insert_beg(struct node **head_ref,int new_data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=new_data;
    temp->next=*head_ref;
    *head_ref=temp;
}
void insert_between(int new_data,int pos)
{
	struct node*fnnode,*tmp;
	fnnode=(struct node*)malloc(sizeof(struct node));
	int i;
	if(fnnode==NULL)
	{
	    printf("Memory can not allocated....");
	}
	else
	{
	    fnnode->data=new_data;
	    fnnode->next=NULL;
	    tmp=stnode;
	    for(i=2;i<=pos-1;i++)
	    {
	        tmp=tmp->next;
	        
	        if(tmp=NULL)
	        break;
	    }
	    if(tmp!=NULL)
	    {
	        fnnode->next=tmp->next;
	        tmp->next=fnnode;
	    }
	    else
	    {
	        printf("\n insert not possible");
	    }
	}
	
	
}void delete_middle(struct node **head_ref,int key)
{
    struct node *temp=*head_ref,*prev;
    if(temp!=NULL&&temp->data==key)                        //for deleting the head
    {
        *head_ref=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=key)                    //for deleting after head to the NULL 
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    return;
    prev->next=temp->next;
    free(temp);
}
void delete_beginning(struct node **head_ref)
{
    struct node *temp=*head_ref;
    if(temp!=NULL)
    {
        *head_ref=temp->next;
        free(temp);
    }
}
void delete_end(struct node **head_ref)
{
    struct node *temp=*head_ref,*prev;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
        
    }
    if(temp==*head_ref)
        head_ref=NULL;
    else
        prev->next=NULL;
    free(temp);
    
}
int main()
{
    int choice,a,b,c,e;
    struct node *head=NULL;
    do
    {
        printf("\n1.Insert End\n2.Insert Beginning\n3.inset middle\n4.Delete middle\n5.Delete Begining\n6.Delete end\n9.print\n0.Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Insert Value from end:");
            scanf("%d",&a);
            insert_end(&head,a);
            break;
        case 2:
            printf("Insert Value from Beginning:");
            scanf("%d",&b);
            insert_beg(&head,b);
            break;
		case 3:
			printf("insert data at middle :");
			scanf("%d",&new_data);
			printf("enter position :");
			scanf("%d",&pos);
			if(pos<=1 || pos<n)
			{
			insert_between(new_data,pos);
			printf("\n insertion complete\n");
			}
			break;
        case 4:
            printf("Enter value which you want to delete:");
            scanf("%d",&c);
            delete_middle(&head,c);
            break;
        case 5:
            delete_beginning(&head);
            break;
        case 6:
            delete_end(&head);
            break;
        case 9:
            print(head);
            break;
        case 0:
            break;
        default:
            printf("\nInvalid Input");
        }
    } while (choice!=0);
}