#include <stdio.h>
int a[10], n = 5;
int rear = -1, front = -1;

void insert()
{
    int val;
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

void delete ()
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
    int choice;
    while (choice)
    {
        printf("1.Insert element \n");
        printf("2.Delete element \n");
        printf("3.Display  elements  \n");
        printf("4. Exit \n");
        do
        {
           printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
        break;

        default:
            printf("Wrong choice \n");
        }
        } while (choice!=4);
        return 0;
        
    }
}