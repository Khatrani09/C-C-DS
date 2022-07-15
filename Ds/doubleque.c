# include<stdio.h>
# define n 5
 
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
    
	//printf("\n After -->front: %d,rear: %d",front,rear);
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
    {
        front=front-1;
		printf("Input the element for adding in queue : ");
		scanf("%d", &val);
		a[front] = val ;
    }
}

                                                
void delete_front()
{   if (front == -1)
    {   printf("Queue Underflow\n");
        return ;
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
        return ;
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
        return;
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
void simple_que()
{
	int choice;  
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
            break;
            default:
            printf("Wrong choice \n");
        } 
	
}
void input_que()
{   int choice;
    do
    {   printf("1.Insert at rear\n");
        printf("2.Delete from front\n");
        printf("3.Delete from rear\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
 
        switch(choice)
        {   case 1:
            insert_rear();
            break;
         case 2:
            delete_front();
            break;
         case 3:
            delete_rear();
            break;
         case 4:
            display_queue();
            break;
         case 5:
            break;
         default:
            printf("Wrong choice\n");
        }
    }while(choice!=5);
}

void output_que()
{   int choice;
    do
    {   printf("1.Insert at rear\n");
        printf("2.Insert at front\n");
        printf("3.Delete from front\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("Enter your choice : ");
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
            delete_front();
            break;
         case 4:
            display_queue();
            break;
         case 5:
            break;
         default:
            printf("Wrong choice\n");
        }
    }while(choice!=5);
}

int main()
{   int choice;
    printf("1.Input restricted dequeue\n");
    printf("2.Output restricted dequeue\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1 :
        input_que();
        break;
     case 2:
        output_que();
        break;
     default:
        printf("Wrong choice\n");
    }
}