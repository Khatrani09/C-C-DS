#include<stdio.h>
#define s 5
#define r 5
int main()
{
    int a1[s]={11,12,13,14,14},a2[r]={16,17,18,19,20},e[20],i,t;
    for(i=0;i<s;i++)
    {
        e[i]=a1[i];
    }
    t=r;
    for(i=0;i<r;i++)
    {
        e[t]=a2[i];
        t++;
    }
   for(i=0;i<t;i++)
   {
       printf("%d ",e[i]);
   }
}