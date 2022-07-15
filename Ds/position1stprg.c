#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",a[i]);

	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]:%d",i,a[i]);
	}
}