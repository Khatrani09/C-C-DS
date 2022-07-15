#include<stdio.h>
int main()
{
	int n,i,a[10]={10,20,30,40,45,50,54};
	printf("enter element for find position= ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		printf("\n%d is at %d position ",n,i+1);
	}
}