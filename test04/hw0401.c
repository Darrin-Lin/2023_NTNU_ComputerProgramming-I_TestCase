#include "mysort.h"

int main()
{
    int32_t n;
    printf("Please input the number of integers: ");
    scanf("%d",&n);
    int32_t a[n];
    printf("Please input %d integers: ",n);
    for(int32_t i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting:\n");
    myprint(a,n);
    mysort(a,n);
    printf("After sorting:\n");
    myprint(a,n);
    return 0;
}