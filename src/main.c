#include <stddef.h>
#include "point.h"

int main(void)
{
    struct point *a = point_create(2, 1);
    struct point *b = point_create(4, 4);

    if (!a || !b)
        return 255;

    point_update(a, 4 , 9);
    point_show(a);
    point_show(b);

    int dist = points_distance(a, b);

    point_destroy(a);
    point_destroy(b);

    return dist;
}
