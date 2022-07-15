#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max=20,min=0,n=0;
	int a[5][5][5],i,j,k,c;
	for(i=0;i<3;i++)
	  for(j=0;j<3;j++)
	     for(k=0;k<3;k++)
		a[i][j][k]=++n;
for(j=0;j<3;j++)
{
	for(k=0;k<3;k++)
	{
		c=a[1][j][k];
		a[1][j][k]=a[2][j][k];
		a[2][j][k]=c;
	}
}

  
 printf("\n------------Matrix 1-------------\n\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			printf("\t %d",a[i][j][k]);
		}	
		printf("\n ");
	}
	printf("\n\n");
}	  
}