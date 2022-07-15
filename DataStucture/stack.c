// push pop
#include <stdio.h>

int val, top = -1, arr[10], n = 5, i, a;
void push()
{

	if (top == n)
	{
		printf("\n Stack Overfllow");
	}
	else
	{
		printf(" Enter a pushed value :");
		scanf("%d", &val);
		arr[++top] = val;
	}
}

void pop()
{
	if (top <= -1)
	{
		printf("\n Stack under flow");
	}
	else
	{
		printf("\n The popped elements is %d", arr[top]);
		top--;
	}
}
void display()
{
	if (top >= 0)
	{
		printf("\n The elements in Stack \n");
		for (i = top; i >= 0; i--)
			printf("\n%d", arr[i]);
		printf("\n Press Next Choice");
	}
	else
	{
		printf("\n The stack is empty");
	}
}
int main()
{

	printf("\n Enter the size of stack:");
	scanf("%d", &n);

	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
	do
	{
		printf("\n Enter the Choice:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			printf("\n\t EXIT POINT ");
			break;
		}
		default:
		{
			printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
		}
		}
	} while (a != 4);
	return 0;
}
