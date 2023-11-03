#include "mycontrol.h"
#include <math.h>
#include <stdio.h>

int main()
{
    double x = 0, y = 0, a = 0;
    int32_t inp = 0;
    scanf("%d",&inp);
    while (inp)
    {
        switch (inp)
        {
        case 0:
            break;
        case 1:
            printf("Initialize(x, y, a):  \n");
            scanf("%lf %lf %lf", &x, &y, &a);
            initialize(x, y, a);
            printf("Initialize: \n");
            break;
        case 2:
            printf("Forward(x):  \n");
            scanf("%lf", &x);
            printf("Forward: %d\n", forward(x));
            break;
        case 3:
            printf("Clock_turn(a):  \n");
            scanf("%lf", &a);
            printf("Clock_turn: %d\n", clock_turn(a));
            break;
        case 4:
            printf("Counterclock_turn(a):  \n");
            scanf("%lf", &a);
            printf("Counterclock_turn: %d\n", counterclock_turn(a));
            break;
        case 5:
            printf("Print():  \n");
            printf("Print: %d\n", print());
            break;
        default:
            break;
        }
        scanf("%d", &inp);
    }
    return 0;
}