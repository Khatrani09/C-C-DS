#include<stdio.h>
int main()
{
    int i=65,a;
    while (i<=89)
    {
        if(i%2!=0){
            printf("%c ",i);
            a=i+34;
            printf("%c ",a);
        }
        i+=4;
    }
    
    return 0;
}