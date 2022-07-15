#include<stdio.h>
#include<stdlib.h>
#define s 5
#define r 5
int main()
{
    int a1[s],a2[r],e[20],i,t,min=10,max=50;
	
    for(i=0;i<s;i++)
    {
	a1[i]=rand()%(max-min+1)+min;
	a2[i]=rand()%(max-min+1)+min;
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