//write a program in c to find the split 3d array to 2d array,and 2d array to 1d array respectively.
//2d to 1d
#include<stdio.h> 
 
int main() 
{ 
	int arr[10][10]={{1,2,3},{5,6,7},{9,10,11}}; 
	int arr2[9]; 
	int i,j,k=0; 
	printf("-------2D-Array-------\n"); 
	for(i=0;i<3;i++) 
	{ 
		for(j=0;j<3;j++) 
		{ 
			printf("%d   ",arr[i][j]); 
			arr2[k]=arr[i][j]; 
			k++; 
		} 
		printf("\n"); 
	} 
	printf("--------1D-Array--------\n"); 
	for(i=0;i<9;i++) 
		printf("%d ",arr2[i]); 
	
	return 0; 
} 