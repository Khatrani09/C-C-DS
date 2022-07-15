#include<stdio.h>
#include<stdlib.h>
void mysearch(int a[],int ele)
{
   for(int i=0;i<10;i++)
   {
      if(a[i]==ele)
      {
          printf("Position : %d",i+1);
          break;
      }
   }
}

int main()
{
    int a[10],i,n,z,k,m;
    do{
    printf("\n------Options------\n(1) Array Elements \n(2) Enter Array Options \n(3) L Search\n(4)Exit");
    printf("\nEnter :");
    scanf("%d",&m);
    switch (m)
    {
        case 1 :
                printf("Enter Array Element : ");
                scanf("%d",&n);
                break;
        case 2 :
            printf("\nInsert Options\n(1) Insert Element \n(2) Using Random Values\n");
            scanf("%d",&z);
            switch(z) {
            case 1 :
            printf("\nEnter Elements of array :");
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            break;

            case 2 :
            for(i=0;i<n;i++)
                a[i]=rand()%100;
                break;
            }
            for(i=0;i<n;i++)
            printf("\t%d",a[i]);
            printf("\n");
            break;
        case 3 :
         printf("\nEnter Element For search :");
        scanf("%d",&k);
        mysearch(a,k);
        break;
    }
    }while(!4);
}