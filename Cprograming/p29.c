#include<stdio.h>
int main()
{
	int i=65;
    while (i<=90)
	{
		printf("%c-%d ",i,i);
        i++;
    }
    /*do
    {
        printf("%c-%d ",i,i);
        i++;
    } while (i<=90);
    */

	return 0;
}