/* Testing Code */

#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    i = i << 31;
    i = ~i + 1;
    printf("%d", !11);
    return 0;
}
