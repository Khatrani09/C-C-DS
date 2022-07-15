#include<stdio.h>
#include<stdlib.h>
 
#define n 5
 
int top=-1,a[5],val;
void push()
{
    printf("enter element to push:");
    scanf("%d",&val);
     if(top==n-1)
     {
		printf("\n overflow!!!");
	 }
	 else
	 {
	     top++;
	     a[top]=val; 
	 }
}
 
void pop()
{
    //int item;
	if(top==-1)
	{
		printf("\n underflow!!");
	}
	else
	{
		val=a[top];
		top--;
		printf("\nDeleted element is %d",val);
	}
}
 
void print()
{
	int i;
	if(top==-1)
	{
		printf("\n stack is empty ");
	
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
		{
			printf("%d\n",a[i]);
		}

	}
}
int main()
{
	int ch;
	do 
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push\n2.Pop\n3.print\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: print();
			break;
			case 4: exit(0);
			default: 
			printf("\nWrong Choice!!");
		}
	}while(ch!=5);
}
