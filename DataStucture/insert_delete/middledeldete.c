#include <stdio.h>
int main()
{
  int arr[10], a, n, i, x;
  printf("Enter number of array\n");
  scanf("%d", &n);

  printf("Enter %d elements\n", n);
  for (a = 0; a < n; a++)
    scanf("%d", &arr[a]);

  x = (n / 2);

  for (i = x; i <= n; i++)
    arr[i] = arr[i] + 1;
  // printf("\n %d",arr[i]+1);
  printf("\n");

  for (a = 0; a < n - 1; a++)
    printf("%d\n", arr[a]);
  return 0;
}