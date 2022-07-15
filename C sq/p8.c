#include<stdio.h>
int main()
{
    int i,j,n=97;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2!=0){
                printf("%c\t",n);
            }
            else{
                printf("%c\t",n-=32);
                n+=32;
            }
            
        n++;
        }
    
    printf("\n");
    }
    return 0;
}