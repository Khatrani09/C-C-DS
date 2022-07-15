#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter any three numbers: ");
	scanf("%d %d %d",&x,&y,&z);
	
	(x>y) && (x>z) ? printf("\n x(%d) is largest",x) :(y>z) ? printf("\n y(%d) is largest",y) : printf("\n z(%d) is largest",z);
	
}