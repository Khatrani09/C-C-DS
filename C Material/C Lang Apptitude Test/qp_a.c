#include <stdio.h>
void main()
{

    // int i = 16;
    // i = !i > 15;
    // printf("i = %d", i);

    // float c[10];
    // printf("%d\n ", abs(&c[2] - &c[6]) / (&c[6] - &c[2]));

    // int a = 2, b = 0, m, n;
    // m = a++ && b++;
    // n = --a || --b;
    // printf("%d %d %d %d", a, b, m, n);

    // do
    // {
    //     printf(" keep ");
    // } while (!printf(" going ") != !1);

    //     int i = 2;
    // N:
    //     printf("%d ", i);
    //     i += 2;
    //     if (i <= 9)
    //         goto N;

    // int x = 10, y = 10;
    // if (!(x && y))
    //     printf(" never settle ");
    // else
    //     printf(" be you ");

    // int i = 10, j = 100, n = 1000;
    // n += j % i++ + j % i--;
    // printf("%d\n", n);

    // int x = 0, z;
    // z = (x || 1) ? (x || 1) : (x && 1);
    // printf("%d", z);

    // char str[50] = "nevergiveUP";
    // int n = printf("\n%s", str);
    // printf("\nn : %d", n);

    // int i = 0;
    // while (5 - i++)
    //     printf("%d", i);

    // int i = 10, j = 20, k = 30;
    // i = j, j = k, k = i;
    // printf(" ", printf("%d", i++), printf("%d", --j), printf("%d", k++));

    // char character = 'A';
    // int number = 32, value;
    // value = character + number;
    // printf("%c -  %d", value, value);

    int i = 1, j = 1;
    for (--i &&j++; i < 10; i += 2)
        printf("loop ");

    //     int a, b;
    //     printf("%d", (scanf("%d %d", &a, &b)));
}

0 1 2 1 0 1 keep going 2 4 6 8 be you 1001 1 12 1 2 3 4 5 20 29 20 a - 97 loop * 5 2
