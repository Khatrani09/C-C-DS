#include<stdio.h>
int main()
{
    int i=65;
    while (i<=69)
    {
        int j=65;
        while (j<=i)
        {
        
           printf("%c ",j);
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}