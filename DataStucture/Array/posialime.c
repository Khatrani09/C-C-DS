#include <stdio.h>
int i, j, k, a, arr[10] = {10, 40, 60, 20, 50, 30};

void etop()
{
    for (i = 0; i < 6; i++)
    {
        printf("\n%d", arr[i]);
    }
    printf("\nenter the element you find:");
    scanf("%d", &j);
    for (i = 0; i < 6; i++)
    {
        if (arr[i] == j)
        {
            printf(" \npossion:%d", i + 1);
        }
    }
}
void ptoe()
{
    // j == 0;
    printf("\nenter the possion you find:");
    scanf("%d", &j);
    printf(" \nelement:%d", arr[j - 1]);
}
int main()
{
    do
    {
        printf("\n\n1 for element to possion \n2 for possion to element\ngo out press 4\nenter your choice:\n");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            etop();
            break;
        case 2:
            ptoe();
            break;
        case 4:
            break;
        }
    } while (k != 4);
}
