#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof a / sizeof a[0];
    printf("Array length:: %d \n", length);
    int j, i;
    printf(" array is :: ");
    for (i = 0; i < length; i++)
    {
        printf(" %d ", a[i]);
    }
    for (i = 0; i < length / 2; i++)
    {

        j = a[i];
        a[i] = a[length - 1 - i];

        a[length - 1 - i] = j;
    }
    printf("\n reverse array is : ");
    for (i = 0; i < length; i++)

    {
        printf(" %d ", a[i]);
    }
}
