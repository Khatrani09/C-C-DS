#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
void head_count(struct node*head)
{
	int cnt=0;
	if(head==NULL)
	 printf("\n List is empty");
	struct node*ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("\t %d",ptr->data);
		cnt++;
		ptr=ptr->link;
	}
	printf("\n list count:%d",cnt);
}
int main()
{
	struct node*head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=11;
	head->link=NULL;
	
	struct node*curret=(struct node*)malloc(sizeof(struct node));
	head=(struct node*)malloc(sizeof(struct node));
	head->data=22;
	head->link=NULL;
	
	curret=(struct node*)malloc(sizeof(struct node));
	curret->data=33;
	curret->link=NULL;
	
	head->link->link=curret;
	head_count(head);
}