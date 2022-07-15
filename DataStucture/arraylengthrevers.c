
// #include <stdio.h>
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int length = sizeof a / sizeof a[0];
//     printf("Array length:: %d \n", length);
//     int j,i;
//     for( i=0;i<length;i++)
//     {
//         printf("Number %u \n",a[i]);
//     }
//      for ( i =0; i=length/2; i++)
//     {

//       j=a[i];
//       a[i]=a[length-1-i];

//       a[length-1-i]=j;

//     }
//     for(i=0;i<length;i++);
//     {
//         printf("Reverse number %d",a[i]);
//     }
//     //   for (int i = length - 1; i >= 0; i--)
//     // {
//     //     printf("\n Reverse number::  %d", b[i]);
//     // }

// }

#include <stdio.h>

void display(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int temp, length = 5;

    int i = 0;
    int j = length - 1;

    printf("Original array:   ");
    display(array, length);

    while (i < j)
    {

        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;
        j--;
    }

    printf("Reverse of array: ");
    display(array, length);

    return 0;
}