#include<stdio.h>
int main()
{
    int i=1,a=11;
    while (i<=5)
    {
        int j=1;
        while (j<=5)
        {
        
           printf("%d ",a++);
           j++;
        }
        printf("\n");
        a=a+5;
        i++;
    }
    
    return 0;
}