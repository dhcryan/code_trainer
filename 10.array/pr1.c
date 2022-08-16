// 주사위
// #include <stdio.h>>
// #include <stdlib.h>
// #define SIZE 5

// int main(void)
// {
//     int i;
//     int scores[SIZE];
//     for (i = 0; i < SIZE; i++)
//     {
//         scores[i] = rand() % 100;
//     }
//     for (i = 0; i < SIZE; i++)
//     {
//         printf("scores[%d]=%d\n", i, scores[i]);
//     }
//     return 0;
// }
// 좌석예약
// #define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>
// #define SIZE 10

// int main(void)
// {
//     char ans1;
//     int i;
//     int ans2;
//     char seats[10] = {0};

//     while (1)
//     {
//         printf("좌석을 예약하시겠습니까?(y또는 n)\n");
//         scanf("%c", &ans1);
//         if (ans1 == 'n')
//             break;
//         for (i = 0; i < SIZE; i++)
//         {
//             printf("%d ", seats[i]);
//         }
//         printf("\n");
//         if (ans1 == 'y')
//         {
//             printf("몇번째 좌석을 예약하시겠습니까?");
//             scanf("%d", &ans2);
//             if (seats[ans2 - 1] == 0)
//             {
//                 seats[ans2 - 1] = 1;
//                 printf("예약되었습니다.\n");
//             }
//             else
//                 printf("이미 예약된 자리입니다.\n");
//         }
//         }
//     return 0;
// }

// selection sort
//  #include <stdio.h>
//  #define SIZE 10

// int main(void)
// {
//     int list[SIZE] = {3, 4, 5, 2, 6, 7, 9, 8, 1};
//     int i, j, temp, least;

//     for (i = 0; i < SIZE - 1; i++)
//     {
//         least = i;
//         for (j = i + 1; j < SIZE; j++)
//         {
//             if (list[j] < list[least])
//                 least = j;
//         }
//         temp = list[i];
//         list[i] = list[least];
//         list[least] = temp;
//     }

//     for (i = 0; i < SIZE - 1; i++)
//     {
//         printf("%3d", list[i]);
//     }
//     return 0;
// }

#include <stdio.h>
#define YEARS 3
#define PRODUCTS 5

int main(void)
{
    int sales[YEARS][PRODUCTS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int total_sale;

    total_sale = sum(sales);
    printf("%d\n", total_sale);
    return 0;
}
int sum(int scores[YEARS][PRODUCTS])
{
    int y, p;
    int total = 0;
    for (y = 0; y < YEARS; y++)
    {
        for (p = 0; p < PRODUCTS; p++)
        {
            total += scores[y][p];
        }
    }
    return total;
}