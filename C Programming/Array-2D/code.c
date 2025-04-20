// #include <stdio.h>
// int main()
// {
//     int row = 5;
//     int col = 5;

//     int arr[row][col];

//     arr[0][0] = 10;
//     arr[0][1] = 20;
//     arr[0][2] = 30;
//     arr[0][3] = 40;
//     arr[0][4] = 50;

//     arr[1][0] = 60;
//     arr[1][1] = 70;
//     arr[1][2] = 80;
//     arr[1][3] = 90;
//     arr[1][4] = 11;

//     arr[2][0] = 11;
//     arr[2][1] = 21;
//     arr[2][2] = 31;
//     arr[2][3] = 41;
//     arr[2][4] = 51;

//     arr[3][0] = 62;
//     arr[3][1] = 72;
//     arr[3][2] = 82;
//     arr[3][3] = 92;
//     arr[3][4] = 12;

//     arr[4][0] = 68;
//     arr[4][1] = 78;
//     arr[4][2] = 88;
//     arr[4][3] = 98;
//     arr[4][4] = 18;

//     // printf("%d", arr[3][2]);

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int row = 5;
    int col = 5;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter element at %d row and %d col : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}