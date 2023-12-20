#include <stdio.h>
#include <stdint.h>
#include "./mystatistics.h"

int main()
{
    int32_t size = 0;

    double mean;
    double variance;
    double std;
    int32_t nul = 0;
    scanf("%d", &nul);
    if (nul == 0)
    {
        scanf("%d", &size);
        int32_t data[size];
        for(int32_t i = 0; i < size; i++)
        {
            data[i] = 0;
        }
        for (int32_t i = 0; i < size; i++)
        {
            scanf("%d", &data[i]);
        }

        printf("return: %d\n", statistics(data, size, &mean, &variance, &std));
        printf("mean = %.3f\n", mean);
        printf("variance = %.3f\n", variance);
        printf("std = %.3f\n", std);
    }
    else if (nul == -1)
    {
        int32_t data[2] = {0};
        printf("return: %d\n", statistics(data, 0, &mean, &variance, &std));
    }

    else
    {
        printf("return: %d\n", statistics(NULL, 0, NULL, NULL, NULL));
    }
    return 0;
}