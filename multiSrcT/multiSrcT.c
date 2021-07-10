#include "jhLib.h"
#include "ihLib.h"
#include <stdio.h>
#include <stdint.h>

int32_t main()
{
    int32_t x=30, y=20;

    printf("jh Result : %d \n", add(x,y));
    printf("ih Result : %d \n", multiply(x,y));

    return 0;
}