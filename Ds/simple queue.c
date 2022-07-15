#include <stdio.h>
#include<stdlib.h>
#define n 5
 
int a[n];
int rear = - 1;
int front = - 1;

void insert()
{
    int val;   
    if (rear == n - 1)
        printf("Queue Overflow \n");
    else
        {
			if(front == - 1 )
            front=0;
            printf("Insert the element in queue : ");
            scanf("%d", &val);
            rear++;
            a[rear] = val;
		}
	
} 
 
void delete()
{
    if (front == - 1 && rear == -1)
    {
        printf("Queue Underflow \n");
    }
    else if(front==rear)
    {
		front=rear=-1;
		printf("\n queu is empty");
    }	
		else{
			
        printf("Element deleted : %d\n", a[front]);
        front++;
    }
} 
 
void display()
{
    int i;
    if (front == - 1 && rear == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i<rear+1; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element \n");
        printf("2.Delete element \n");
        printf("3.Display  elements  \n");
        printf("9.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 9:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    }
}




























































































































































































