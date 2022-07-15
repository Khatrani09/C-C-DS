#include <stdio.h>
void main()
{

    // int i = 23;
    // i = !i > 25;
    // printf("i = %d", i);
    // 1 ) ANS :
    // float c[10];
    // printf("%d\n ", abs(&c[4] - &c[8]) / (&c[8] - &c[4]));

    // 2 ) ANS :
    // int a = 4, b = 0, m, n;
    // m = a++ && b++;
    // n = --a || --b;
    // printf("%d %d %d %d", a, b, m, n);

    // 3 ) ANS :
    // do
    // {
    //     printf(" keep ");
    // } while (!printf(" moving"));

    // 4 ) ANS :
    //     int i = 3;
    // N:
    //     printf("%d ", i);
    //     i += 3;
    //     if (i <= 10)
    //         goto N;

    // 5 ) ANS :
    // int x = 11, y = 11;
    // if (!(x && y))
    //     printf(" never settle ");
    // else
    //     printf(" be you ");

    // 6 ) ANS :
    // int i = 20, j = 200, n = 2000;
    // n += j % i++ + j % i--;
    // printf("%d\n", n);

    // 7 ) ANS :
    // int x = 0, z;
    // z = (x || 1) ? (x || 1) : (x && 1);
    // printf("%d", z);

    // 8 ) ANS :
    // char str[50] = "pushyourself";
    // int n = printf("\n%s", str);
    // printf("\nn : %d", n);

    // 9 ) ANS :
    // int i = 2;
    // while (7 - i++)
    //     printf("%d", i);

    // 10 ) ANS :
    // int i = 20, j = 30, k = 40;
    // i = j, j = k, k = i;
    // printf(" ", printf("%d", i++), printf("%d", --j), printf("%d", k++));

    // 11 ) ANS :
    // char character = 'D';
    // int number = 32, value;
    // value = character + number;
    // printf("%c -  %d", value, value);

    // 12 ) ANS :
    // int i = 2, j = 2;
    // for (--i &&j++; i < 11; i += 2)
    //     printf("loop ");

    float a, b;
    printf("%d", (scanf("%f %f", &a, &b)));
}

// 0 1 2 1 0 1 keep going 2 4 6 8 be you 1001 1 12 1 2 3 4 5 20 29 20 a - 97 loop * 5 2
