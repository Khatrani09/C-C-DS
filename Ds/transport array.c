#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max=10;
	int a[5][5],i,j;	
	for(i=0;i<3;i++)
	
	  for(j=0;j<3;j++)
	  	
	     a[i][j]=rand()%max;
	  
	printf("\n-------Matrix 1---------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
		
}