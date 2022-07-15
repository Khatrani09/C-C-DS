#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5],i;
	for(i=0;i<3;i++)
	{
	  printf("enter a[%d] : ",i);
	  scanf("%d",&a[i]);
	}
		

	for(i=0;i<3;i++)
	{
		printf("\n %d",a[i]);
	
	}
	printf("\n ");
}