#include<stdio.h>
int main()
{
	int max=20,min=20,n=0,pos=0,e[20],z=0;
	int a[5][5][5],b[5][5],i,j,k;
	 for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	     for(k=0;k<3;k++)
		a[i][j][k]=++n;
    printf("\n--------3d array--------\n\n");
    for(i=0;i<3;i++)
     {
	for(j=0;j<3;j++)
	{
	    for(k=0;k<3;k++)
	     {
		printf("\t %d",a[i][j][k]);
	     }	
	     printf("\n");
	}
	printf("\n\n");
     }
	 
     printf("\n enter the position to the split the array: ");
     scanf("%d",&pos);
	  for(i=0;i<=pos;i++)
          
	     for(j=0;j<3;j++)
	       
	         for(k=0;k<3;k++)
	           
		      b[j][k]=a[i][j][k];
	printf("\n----------2d array----------\n\n");
	for(j=0;j<3;j++)
	{
	    for(k=0;k<3;k++)
	     {
		 printf("\t %d",b[j][k]);
	   	 e[z]=b[j][k];
		 z++;
	     }
	     printf("\n");
	}
	printf("\n-----------1d array-----------\n\n");
	for(j=0;j<9;j++)
	printf("%d ",e[j]);	
	
}