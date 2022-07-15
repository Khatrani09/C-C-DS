#include<stdio.h>
#include<stdlib.h>
void printarray(int a[])
{
    printf("\n array \n");
     for(int i=0;i<10;i++)
   printf(" %d \t",i);
    printf("\n");
     for(int i=0;i<10;i++)
     printf("%d\t",a[i]);
}
void findpos(int a[],int element)
{
    for(int i=0;i<10;i++)
    {
        if(a[i]==element)
        printf("position of %d is %d",element,i+1);
        
    }
}

void sel_sort(int a[],int n)
{8
    int i,j,temp;
    	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
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

int binaraysearch(int a[],int lb,int ub,int val)
{
    int mid;
    if(ub>=lb)
    {
        mid=(lb+ub)/2;
        if(a[mid]==val)
        {
            return mid+1;
        }
        else if(a[mid]<val)
        {
            return binaraysearch(a,mid+1,ub,val);
        }
        else
        {
            return binaraysearch(a,lb,mid-1,val);
        }
    }
    return -1;
}
void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		printarray(a);
	}
}
int main()
{
    int max=100,min=50,a[10],element,i,j,n=10,val,op,k,b[10];
    for(i=0;i<n;i++)
    a[i]=rand()%(max-min+1)+min;
    printarray(a);
    printf("\n enter element for find position=");
    scanf("%d",&element);
    findpos(a,element);
	
	//sec_sort(a,n);
	//printf("\n Array elements in assending order: ");
	//for(i=0;i<n;i++)
	//printf("\n %d",a[i]);
	
	bubble_sort(a,n);
	printf("\n Array elements in assending order: ");
	for(i=0;i<n;i++)
	printf("\n %d",a[i]);
	
	printf("\nEnter Element For search :");
    scanf("%d",&k);
    op = binaraysearch(a, 0, n, k);
         if(op == -1)
          {
               printf("\n Element is not present in array");
          }
          else
          {
				printf("Position is : %d",op);
          } 
	
          return 0;
}


	
	
	
