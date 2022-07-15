#include<stdio.h>
int main()
{
    int i=1;
    while (i<=5)
    {
        int j=1;
        while (j<=i)
        {
           printf("%c ",i-j+65);
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}