#include <stdio.h>
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

void point_destroy(struct point *p)
{
    free(p);
}

void point_update(struct point *p, int x, int y)
{
    p->x = x;
    p->y = y;
}

void point_show(struct point *p)
{
    printf("(%d;%d)\n", p->x, p->y);
}

int points_distance(struct point *pa, struct point *pb)
{
    return abs(pa->x - pb->x) + abs(pa->y - pb->y);
}
