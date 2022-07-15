//search element
#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50};
	int i,p,l=5,n;
	printf("array is: ");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);'
	}
	printf("\n enter position you want to add element : ");
	scanf("%d",&p);
	printf("\n enter element you want to add : ");
	scanf("%d",&n);
	
	for(i=l;i>p-1;i--)
	{
		a[i]=a[i-1];

	}
	l++;
	a[p-1]=n;
	for(i=0;i<l;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;

}