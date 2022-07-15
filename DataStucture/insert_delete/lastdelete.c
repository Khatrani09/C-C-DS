#include <stdio.h>
int main()
{
  int arr[5], c, n;
  printf("Enter number of  array\n");
  scanf("%d", &n);

  printf("Enter %d Number\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);

  printf("\n");

  for (c = 0; c < n - 1; c++)
    printf("Index %d Number %d\n", c, arr[c]);
  return 0;
}