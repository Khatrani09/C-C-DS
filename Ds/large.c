#include<stdio.h>
int main()
{
	int a=200,b=400,c=1000;
	printf("%d",(a>b && a>c) ? a: b>c ? b:c);
	
}