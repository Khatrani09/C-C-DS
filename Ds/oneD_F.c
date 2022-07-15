#include<stdio.h>
#include<stdlib.h>
void mysearch(int a[],int ele)
{
   for(int i=0;i<10;i++)
   {
      if(a[i]==ele)
      {
          printf("Position : %d",i+1);
          break;
      }
   }
}
int binarysearch(int a[],int lb,int ub,int val)
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
            return binarysearch(a,mid+1,ub,val);
        }
         else 
        {
            return binarysearch(a,lb,mid-1,val);
        }
    }
    return -1;
}
void selection_sort(int a[],int n)
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
	   {
		if(a[i]<a[j])
	   	{
			key=a[i];
			a[i]=a[j];
			a[j]=key;
	      }
	   }	
	}
}

int main()
{
    int a[10],i,n=5,z,k,m,lb,ub,op,s;
    do{
    printf("\n------Options------\n(1) Array Elements \n(2) Enter Array Options \n(3) Linear Search\n(4) Binary Search(5)sorting\n(6)Exit\n");
    printf("\nEnter :");
    scanf("%d",&m);
    switch (m)
    {
        case 1 :
                printf("Enter Array Element : ");
                scanf("%d",&n);
                break;
        case 2 :
            printf("\nInsert Options\n(1) Insert Element \n(2) Using Random Values\n");
            scanf("%d",&z);
            switch(z) {
            case 1 :
            printf("\nEnter Elements of array :");
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            break;
            case 2 :
            for(i=0;i<n;i++)
                a[i]=rand()%100;
                break;
            }
            for(i=0;i<n;i++)
            printf("\t%d",a[i]);
            printf("\n");
            break;
        case 3 :
         printf("\nEnter Element For search :");
        scanf("%d",&k);
        mysearch(a,k);
        break;
        case 4:
                printf("\nEnter Element For search :");
                 scanf("%d",&k);
                 op=binarysearch(a,0,n,k);
                printf("Position is : %d",op);
                break;
	case 5:
		selection_sort(a,n);
		for(i=0;i<n;i++)
		printf(" %d",a[i]);
		break;

		
		
    }
    }while(m!=6);
}

 