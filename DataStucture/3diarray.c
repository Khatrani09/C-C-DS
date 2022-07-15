#include <stdio.h>
#include <stdlib.h>

int arr[10][10][10], a, b, c, n;
void array(int a, int b, int c)
{
	int i, j, k;
	printf("\n \n    =========Matrix========= \n \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			for (k = 0; k < c; k++)
			{
				arr[i][j][k] = ++n;
				printf("\t %d", arr[i][j][k]);
			}
			printf("\n ");
		}
		printf("\n\n");
	}
}
int main()
{

	printf("\n How many 2d array :");
	scanf("%d", &a);
	printf("\n How many row :");
	scanf("%d", &b);
	printf("\n How many column :");
	scanf("%d", &c);
	array(a, b, c);
}

// #include <stdio.h>
// #include <stdlib.h>
//  int arr[100][100][100], a, b, c;
// void threed(int a, int b, int c)
// {
//     int i, j, k;
//     for (i = 0; i < a; i++)
//     {
//         for (j = 0; j < b; j++)
//         {
//             for (k = 0; k < c; k++)
//             {

//                 arr[i][j][k] = rand()%90;
//             }
//         }
//     }
//     printf("\n\n");
//     for (i = 0; i < a; i++)
//     {
//         printf("%d)",i+1);
//         for (j = 0; j < b; j++)
//         {
//             for (k = 0; k < c; k++)
//             {
//                 printf("\t%d",arr[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n\n");
//     }

// }

// int main()
// {

//     printf("\nhow many 2d array:");
//     scanf("%d", &a);
//     printf("\nhow many row:");
//     scanf("%d", &b);
//     printf("\nhow many col:");
//     scanf("%d", &c);
//     threed(a, b, c);
// }