#include <stdio.h>

int main()
{
   int arr[10], posi, c, n, val;
   printf("Enter number of array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);

   printf("Enter the value to insert\n");
   scanf("%d", &val);

   for (c = n; c >= 0; c--)
      arr[c] = arr[c - 1];
   printf("\n*** %d ***\n", arr[c]);
   printf("\n=====%d====\n", arr[c - 1]);
   arr[0] = val;
   printf("\nInsert %d in first index\n", arr[0]);
   printf("\n");

   for (c = 0; c <= n; c++)
      printf("%d\n", arr[c]);

   return 0;
}