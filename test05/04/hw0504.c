#include <stdio.h>
#include <stdint.h>
#include "./mytlv.h"

int main()
{
    // uint8_t array[] = {0x01, 0x04, 0x00, 0x09, 0x05, 0x02, 0x07, 0x02,
    //                    0x01, 0x00, 0x02, 0x07, 0x02, 0x00, 0x04, 0x05,
    //                    0x0A, 0x00, 0x00, 0x09, 0x00, 0x00};
    // int32_t size = sizeof(array)/sizeof(array[0]);
    int32_t size = 0;
    scanf("%d", &size);
    uint8_t array[size];
    for (int32_t i = 0; i < size; i++)
    {
        scanf("%hhd", &array[i]);
    }
    printf("return: %d\n",run(array, size));
    return 0;
}