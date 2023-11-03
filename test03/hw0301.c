#include "mycircle.h"
#include <stdio.h>

int main()
{
    int32_t inp = 0;
    double db =0;
    scanf("%d",&inp);
    while (inp)
    {
        switch (inp)
        {
        case 0:
            break;
        case 1:
            printf("Input radius: \n");
            scanf("%lf", &db);
            printf("set_radius: %d\n",set_radius(db));
            break;
        case 2:
            printf("get_circle_circumference: %f\n", get_circle_circumference());
            break;
        case 3:
            printf("get_circle_area: %f\n", get_circle_area());
            break;
        case 4:
            printf("Input x: \n");
            scanf("%lf", &db);
            printf("get_tangent_area: %f\n", get_tangent_area(db));
            break;
        case 5:
            printf("Input n: \n");
            scanf("%d", &inp);
            printf("get_inner_regular_polygon_area: %f\n", get_inner_regular_polygon_area(inp));
            break;
        case 6:
            printf("Input n: \n");
            scanf("%d", &inp);
            printf("get_outer_regular_polygon_area: %f\n", get_outer_regular_polygon_area(inp));
            break;
        default:
            break;
        }
        scanf("%d", &inp);
    }

    return 0;
}
