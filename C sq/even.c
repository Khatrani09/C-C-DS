#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=10;i++)
    {
        for(j=1;j<=5;j++)
    {
        if(i%2==0){
            printf("%d\t",i);
        }
    }
    printf("\n");
    }
    return 0;
}