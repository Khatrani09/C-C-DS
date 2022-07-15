#include <stdio.h>
#include<stdlib.h>
 #define n 6
int main(){
    int arr[n],min=10,max=50;
    int temp,i;
	for(i=0;i<6;i++)
	{
		arr[i]=rand()%10;
	}
    for(int i = 0; i<n/2; i++)
   {
	temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }

}







 

