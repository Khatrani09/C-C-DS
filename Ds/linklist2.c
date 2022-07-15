#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void head_count(struct node*head)
{
	int cnt=0;
	if(head==NULL)
		printf("\n list is empty");
	struct node*ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("element: %d\n",ptr->data);
		cnt++;  
		ptr=ptr->next;
	}
	printf("\n list count : %d",cnt);
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
	head->link=second;
	
	second->data=11;
	second->link=third;
	
	third->data=19;
	third->link=NULL;
	
	head_count(head);
	
	return 0;
}