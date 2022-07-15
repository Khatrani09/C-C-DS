#include<stdio.h>
#include<stdlib.h>
#define n 5
int a[n];
int front=-1,rear=-1;
void insert(int val)
{
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		a[rear]=val;
	}
	else if((rear+1)%n==front)
	{
		printf("\n queue is overflow...");
	}
	else
	{
		rear=(rear+1)%n;
		a[rear]=val;
	}
}
void delete()
{
	if(front==-1&& rear==-1)
	{
		printf("\n underflow");
	}
	else if(front==rear)
	{
		printf("\n deleted item is %d",a[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("\n deleted item is %d",a[front]);
		front=(front+1)%n;
	}
}
void display()
{
	if(front==-1)
	{
		printf("\n empty queue");
	}
	printf("\n queue elements : ");
	if(rear>=front)
	{
		for(int i=front;i<=rear;i++)
			printf("%d",a[i]);
	}
	else
	{
		for(int i=front;i<n;i++)
			printf("%d",a[i]);
		
		for(int i=0;i<=rear;i++)
			printf("%d",a[i]);
	}
}
int main()
{
	int ch,x;
	do
	{
	
	printf("\n 1. Insert element ");
	printf("\n 2. Delete element ");
	printf("\n 3. display ");
	printf("\n 4. Exit ");
	printf("\n enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("\n insert element to add:");
		scanf("%d",&x);
		insert(x);
		break;
		case 2:
		delete();
		break;
		case 3:
		display();
		break;
		case 4:
		break;
		default:
		printf("\n wrong choice...");
	}
	}while(ch!=4);
}