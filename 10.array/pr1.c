// �ֻ���
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
// �¼�����
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
//         printf("�¼��� �����Ͻðڽ��ϱ�?(y�Ǵ� n)\n");
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
//             printf("���° �¼��� �����Ͻðڽ��ϱ�?");
//             scanf("%d", &ans2);
//             if (seats[ans2 - 1] == 0)
//             {
//                 seats[ans2 - 1] = 1;
//                 printf("����Ǿ����ϴ�.\n");
//             }
//             else
//                 printf("�̹� ����� �ڸ��Դϴ�.\n");
//         }
//         }
//     return 0;
// }
