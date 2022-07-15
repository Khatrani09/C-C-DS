#include<stdio.h>
int main()
{
	int numbers[]={10,20,30,40,50,60};
	int arraysize=sizeof(numbers);
	int intsize=sizeof(numbers[0]);
	int length=arraysize/intsize;
	printf("\n arraysize=%d  ",arraysize);
	printf("\n intsize=%d  ",intsize);
	printf("\n Length of array=%d ",length);
	return 0;
}