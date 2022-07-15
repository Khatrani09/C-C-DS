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
void  insert_beg(struct node ** head,int data)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	
	temp->data=data;
	temp->next=*head;
	*head=temp;
	
}
void insert_end(struct node ** head,int data)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node*ptr=*head;
	temp->data=data;
	temp->next=NULL;
	if(*head==NULL)
	{
		*head=temp;
		return;
	}
	while(ptr->next!=NULL)
	
		ptr=ptr->next;
	
	ptr->next=temp;
	
	return ;
	
}
void insert_between(struct node ** head,int data)
{
}
void delete_between(struct node ** head,int key)
{
	struct node*temp=*head,*prev;
	
	if(temp!=NULL && temp->data==key)
	{
		*head=temp->next;
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
void delete_last(struct node ** head,int key)
{
	struct node*temp=*head,*prev;
	
	if(temp!=NULL && temp->data==key)
	{
		*head=temp->next;
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

int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	
	head->data=7;
	head->next=second;
	
	second->data=11;
	second->next=third;
	
	third->data=19;
	third->next=NULL;
	
	printf("\n before start  insertion\n");
	head_count(head);
	insert_beg(&head,77);
	insert_end(&head,90);
	printf("\n after end  insertion\n");
	head_count(head);
	
	
	
	delete_between(&head,7);
	printf("\n after deletion\n");
	head_count(head);
	
	
	
	return 0;
}