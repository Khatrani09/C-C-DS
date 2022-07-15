#include <stdio.h>
void intrest(float a, float ci, float t)
{
    float x, y, i;
    x = (1 + ci / 100);
    for (i = 1; i < t; i++)
    {
        x *= x;
    }
    y = (y * x);
    printf("Total intrest :%f", a);
}

int main()
{
    float ci, t, y, total, x, i;
    printf("enter the ammount:");
    scanf("%f", &y);
    printf("enter the time:");
    scanf("%f", &t);
    printf("enter the intrest:");
    scanf("%f", &ci);
    intrest(y, ci, t);
    return 0;
}