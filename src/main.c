#include <stddef.h>
#include "point.h"

int main(void)
{
    struct point *a = point_create(2, 1);

    return a != NULL;
}
