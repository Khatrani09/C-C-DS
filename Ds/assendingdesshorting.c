#include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("\n Enter array Elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	asc_sort(a);
	printf("Array elements in assending order: ");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	
}
void asc_sort(int a[],int n)
{
    int i,j,temp;
    	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
    
}

