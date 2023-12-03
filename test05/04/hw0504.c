#include <stdio.h>
#include <stdint.h>
#include "./mytlv.h"

int main()
{  
    int32_t size = 0;
    scanf("%d", &size);
    uint8_t array[size];
    for (int32_t i = 0; i < size; i++)
    {
        scanf("%hhd", &array[i]);
    }
    run(array, size);
    return 0;
}