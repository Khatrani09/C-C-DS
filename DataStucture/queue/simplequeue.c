#include <stdio.h>
int a[10], n = 5;
int rear = -1, front = -1;

void insert()
{
    int val;
    if (rear == n - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &val);
        rear++;
        a[rear] = val;
    }
}

void delete ()
{
    if (rear == -1 && front == -1)
    {
        printf("\n\tQUEUE is empty\n");
    }
    else
    {
        printf("\n\t The popped elements is %d \n", a[front++]);
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
        printf("\n Queue is empty ");
    else
    {
        printf("Queue is : \n");
        for (i = front; i < rear + 1; i++)
            printf("%d ", a[i]);
        printf("\n");
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
        } while (choice != 4);
        return 0;
    }
}