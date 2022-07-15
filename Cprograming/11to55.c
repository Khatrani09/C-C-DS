#include <stdio.h>
int main()
{
    int i, j, n = 11;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d\t", n);
            n++;
        }
        n = n + 5;
        printf("\n");
    }
    return 0;
}