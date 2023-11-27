#include <stdio.h>
#include <stdint.h>
#include "mychess.h"

int main()
{
    int32_t board[10][9] = {0};
    // {
    // {0, 0, 0, 1, 0, 0, 0, 0, 0},
    // {0, 0, 15, 0, 17, 0, 0, 15, 0},
    // {0, 0, 0, 0, 0, 0, 0, 0, 0},
    // {0, 0, 0, 0, 0, 0, 0, 0, 0},
    // {0, 0, 0, 0, 17, 0, 17, 4, 0},
    // {0, 0, 0, 0, 0, 0, 0, 0, 0},
    // {0, 0, 0, 0, 0, 0, 0, 0, 0},
    // {0, 0, 0, 0, 11, 0, 7, 0, 14},
    // {0, 0, 0, 0, 0, 0, 0, 5, 0},
    // {0, 0, 0, 12, 0, 12, 0, 0, 0}
    // };
    int32_t inp = 0;
    scanf("%d", &inp);
    if (inp)
    {
        for (int32_t i = 9; i >= 0; i--)
        {
            for (int32_t j = 0; j < 9; j++)
            {
                scanf("%d", &board[i][j]);
            }
        }
    }
    else
    {
        printf("\n%d\n", checkmate(NULL));
    }
    printf("\n%d\n", checkmate(board));
    return 0;
}
