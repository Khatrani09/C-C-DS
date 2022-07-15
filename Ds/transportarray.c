#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max=100;
	int a[5][5],i,j,b[5][5],c[5][5];	
	for(i=0;i<3;i++)
	
	  for(j=0;j<3;j++)
	  {
	     a[i][j]=rand()%max;
	     b[i][j]=rand()%max;
	  }
	printf("\n-------Matrix 1---------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n-------Matrix 2---------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n-------Matrix 1 trans---------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[j][i];
			printf("\t %d",c[i][j]);
		}
		printf("\n");
	}
	printf("\n-------total---------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=b[i][j]+c[i][j];
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}

	
}	