#include <stdio.h>
#include <stdint.h>
#include "./tas.h"
#include "./decode.h"

int main()
{

    uint8_t *src = NULL;
    size_t size = 10;
    src = calloc(size, sizeof(uint8_t));
    // printf("%p", src);
    uint8_t button = 0;
    uint64_t start_frame = 0;
    uint64_t end_frame = 0;
    scanf("%hhu", &button);
    scanf("%zu", &start_frame);
    scanf("%zu", &end_frame);
    button_set_frame(&src, &size, button, start_frame, end_frame);
    scanf("%hhu", &button);
    scanf("%zu", &start_frame);
    scanf("%zu", &end_frame);
    button_unset_frame(src, size, button, start_frame, end_frame);
    extract_fm2_file(src, size);
    free(src);
    return 0;
}