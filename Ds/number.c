#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		(i%15==0)?printf("skill qode"):(i % 3==0)?printf("skill "):(i % 5==0)?printf("qode "):printf("%d", i);	
	}

}