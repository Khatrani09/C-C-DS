#include<stdio.h>
#include<stdlib.h>
#define n 5
 
int a[n];
int front = -1;
int rear = -1;                             

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
void insert_rear()
{
    int val;
    if((front == 0 && rear == n-1) || (front == rear+1))
    {  
		printf("Queue Overflow\n");
	}
     if (front == -1)  
    {   
	    front =0;
		rear = 0;
    }
    else if(rear == n-1)  
    
        rear = 0;
    
	else
    
        rear = rear+1;
         
    printf("Input the element for adding in queue : ");
    scanf("%d", &val);
    a[rear] = val ;
}

void insert_front()
{   int val;
    if((front == 0 && rear == n-1) || (front == rear+1))
    {  
		printf("Queue Overflow \n");
	}
    if (front == -1 )
    { 
		front = 0;
		rear =0;
	}
    else if(front== 0)
    
        front=n-1;
    
    else
    
        front=front-1;
		printf("Input the element for adding in queue : ");
		scanf("%d", &val);
		a[front] = val ;
    
}
void delete_front()
{   if (front == -1)
    {   
		printf("Queue Underflow\n");
    }
    printf("Element deleted from queue is : %d\n",a[front]);
    if(front == rear) 
    {   front = -1;
        rear=-1;
    }
    else
        if(front == n-1)
            front = 0;
        else
            front = front+1;
}

void delete_rear()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    printf("Element deleted from queue is : %d\n",a[rear]);
    if(front == rear) 
    {
        front = -1;
        rear=-1;
    }
    else
        if(rear == 0)
            rear=n-1;
        else
            rear=rear-1;    
}

void display_queue()
{   
    int front_pos = front,rear_pos = rear;
     
    if(front == -1)
    {   printf("Queue is empty\n");
      
    }
    printf("Queue elements :\n");
    if( front_pos <= rear_pos )
    {   
        while(front_pos <= rear_pos)
        {
            printf("%d ",a[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while(front_pos <= n-1)
        {   printf("%d ",a[front_pos]);
            front_pos++;    
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {   
            printf("%d ",a[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}
void simple_queue()
{
	int choice;
    do
    {
        printf("1.Insert element \n");
        printf("2.Delete element \n");
        printf("3.Display  elements  \n");
        printf("4.Exit \n");
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
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    }while(choice!=5);
}	
void doubley_queue()
{
 int choice;
 do
 {
  printf("\n1.Insert at rear ");
  printf("\n2.Insert at front ");
  printf("\n3.Delete from rear ");
  printf("\n4.Delete from front ");
  printf("\n5.Display ");
  printf("\n6.Exit");
  printf("\n\nEnter your choice ");
  scanf("%d",&choice);
  switch(choice)
  {
	case 1:
     insert_rear();
    break;
   case 2:
    insert_front();
    break;
   case 3:
    delete_rear();
    break;
   case 4:
    delete_front();
    break;
   case 5:
   display_queue();
    break;
	case 6:
	break;
	default:
	printf("wrong choice");
  }
 }while(choice!=6);
 
 
}
int main()
{   int choice;
    printf("1.Simple Queue\n");
    printf("2.Doublely Queue\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1 :
        simple_queue();
        break;
     case 2:
        doubley_queue();
        break;
     default:
        printf("Wrong choice\n");
    }
}

