//write a program in c to find the maximum and minimum element in an array.
#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6},i,c=0,d=a[0];
	for(i=0;i<6;i++)
	{
            
	     if(c<a[i])
	     c=a[i];
	     if(d>a[i])
	     d=a[i];
	    
	}
	printf("maximum= %d",c);
	printf("\nminimum= %d",d);
	
}