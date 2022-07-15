#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,n,j,key,op=0,k,b[n];
    printf("\nEnter Size of array :");
    scanf("%d",&n);
    printf("\nEnter Elements of array :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\na[%d]: ",n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    for(i=0;i<n;i++)
    
        for(j=i+1;j<n;j++)
        
            if(a[i]>a[j])
            {
                key=a[i];
                a[i]=a[j];
                a[j]=key;
            }
        
    
     printf("\nSecond Largest : %d",a[n-2]);
    printf("\nSecond smallest : %d\n",a[1]);

    for(i=0,k=1;i<n,k<n;i++,op++,k++)
    {
        b[i]=a[op]+a[k];
        printf("%d ",b[i]);
    }
}