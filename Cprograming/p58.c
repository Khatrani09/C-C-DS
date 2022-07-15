#include<stdio.h>
int main()
{
    int i=1,a=97;
    while (i<=5)
    {
        int j=1;
        while (j<=i)
        {
            if(j%2!=0){
           printf("%c ",a);
            }
            else{
                a=a-32;
                printf("%c ",a);
                a+=32;
            }
            a++;
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}