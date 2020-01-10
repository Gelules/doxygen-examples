#include <stdlib.h>
#include "point.h"

struct point *point_create(int x, int y)
{
    struct point *new = malloc(sizeof (struct point));
    if (!new)
        return NULL;

    new->x = x;
    new->y = y;
    return new;
}
