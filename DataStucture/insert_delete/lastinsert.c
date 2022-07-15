#include <stdio.h>
void main()
{
    int i, n, val, arr[n];

    printf("First enter number of Array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Insert end number: ");
    scanf("%d", &val);
    arr[n] = val;
    // printf("\n%d Insert last Array\n",arr[n]);
    printf("Element %d is inserted at %d index \n", val, n);

    for (i = 0; i < n + 1; i++)

        printf("%d \t", arr[i]);
}
