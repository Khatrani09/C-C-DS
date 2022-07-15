
#include <stdio.h>
int main()
{
   int arr[10], posi, c, n, val;
   printf("Enter number of array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);

   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &posi);

   printf("Enter the value to insert\n");
   scanf("%d", &val);

   for (c = n - 1; c >= posi - 1; c--)
      arr[c + 1] = arr[c];

   arr[posi - 1] = val;
   printf("\n %d \n", val);

   printf("Resultant array is\n");

   for (c = 0; c <= n; c++)
      printf("%d\n", arr[c]);

   return 0;
}
