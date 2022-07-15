#include<stdio.h>
#include<stdlib.h>
#define n 10;

    int a[10]={10,20,30,40,50,60,70,80,90,100},lb=0,up=9,val,x;
int binaerysearch(int val)
{

    int mid;
  
    if (up >= lb)
    {
        mid = (lb + up) / 2;
        if (a[mid] == val)
        {
            return mid + 1;
        }
        else if (a[mid] < val)
        {
            return binaerysearchq(a, mid + 1, up, val);
        }
        else
        {
            return binaerysearchq(a, lb, mid - 1, val);
        }
    }
    else
    return -1;
}
int binaerysearchq(int a[],int lb,int up,int val)
{

    int mid;
  
    if (up >= lb)
    {
        mid = (lb + up) / 2;
        if (a[mid] == val)
        {
            return mid + 1;
        }
        else if (a[mid] < val)
        {
            return binaerysearchq(a, mid + 1, up, val);
        }
        else
        {
            return binaerysearchq(a, lb, mid - 1, val);
        }
    }
    else
    return -1;
}
int main()
{
      printf("Enter your choich number ::");
    scanf("%d",&val);
    printf("%d",binaerysearch(val));
}