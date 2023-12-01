#include <stdio.h>
#include <stdint.h>
#include "./mysphere.h"

int main()
{
    double r = 0, a = 0, b = 0, c = 0, d = 0, area = 0;
    int32_t nul = 0;
    scanf("%d", &nul);
    if (nul == 0)
    {
        scanf("%lf %lf %lf %lf %lf", &r, &a, &b, &c, &d);
        int32_t return_value = get_cap_area(r, a, b, c, d, &area);
        printf("return: %d\n", return_value);
        printf("area: %lf\n", area);
    }
    else
    {
        int32_t return_value = get_cap_area(1, 0, 0, 0, 0, NULL);
        printf("return: %d\n", return_value);
    }
    
    return 0;
}