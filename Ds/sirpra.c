#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
void head_count(struct node*ptr)
{
	while(ptr!=NULL)
	{
		printf("element: %d\n",ptr->data);
		ptr=ptr->next;
	}
	
}
void  insert_beg(struct node ** head_ref,int new_data)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	
	temp->data=new_data;
	temp->next=*head_ref;
	*head_ref=temp;
	
}
void insertmid(struct node* prev,int new_data)
{
    struct  node *temp = (struct node*)malloc(sizeof(struct node));
    if(prev == NULL)
    {
        printf("\nprev can not be null");
        return;
    }
    temp->data = new_data;
    temp->next = prev->next;
    prev->next = temp;
}

void insert_end(struct node ** head_ref,int new_data)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*ptr=*head_ref;
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
	
	return ;
}
void deletefront(struct node **head)
{
     if(head==NULL)
        printf("\nlist is empty");
    struct node *temp=*head;
    *head= temp->next;
    free(temp);
}
void delete_between(struct node ** head_ref,int key)
{
	struct node*temp=*head_ref,*prev;
	
	if(temp!=NULL && temp->data==key)
	{
		*head_ref=temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=key)
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

int main()
{
	int ch,a,b,c,x;
	struct node*head=NULL;
	do
	{
		printf("\n1.insert beginning\n2.insert middle \n3.insert end\n4.delete beginning\n5.delete middle\n6.delete end\n9.print");
		printf("\n enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\n enter value for beginning insert: ");
			scanf("%d",&a);
			insert_beg(&head,a);
			break;
			
			case 2:
			printf("\nEnter value for middle insert :");
            scanf("%d",&x);
            insertmid(head->next,x);
			break;
			
			case 3:
			printf("\n enter value for end insert: ");
			scanf("%d",&b);
			insert_end(&head,b);
			break;
			
			case 4:
			deletefront(&head);
			break;
			
			case 5:
			printf("\n enter value for middle delete : ");
			scanf("%d",&c);
			delete_between(&head,c);
			break;
			
			case 6:
			deletback(&head);
            break;
		
			case 9:
            head_count(head);
            break;
			
			default:
			printf("\n wrong choice ");
		}
	}while(ch!=0);
}	