/**
 * @file point.h
 * @author Jules Aubert
 * @date January, 10, 2020
 * @brief File containing the structure of Point and function declarations
 * associated.
 */

#ifndef POINT_H
#define POINT_H


/**
 * @struct point point.h
 * @brief contains a struct point with two data members, a coordinate x and a
 * coordinate y
 */
struct point
{
    int x;
    int y;
};


/**
 * @param x is the x coordinate for the point
 * @param y is the y coordinate for the point
 * @return a struct point initialized with the parameters, or NULL if malloc
 * fails
 * @brief create a point structure initizalied with the two parameters using
 * malloc
 */
struct point *point_create(int x, int y);

/**
 * @param p is the pointer to free
 * @return void
 * @brief simple call to free onto the pointer
 */
void point_destroy(struct point *p);

/**
 * @param p is the point structure to update
 * @param x is the new x coordinate
 * @param y is the new y coordinate
 * @return void
 * @brief update the point with the two new coordinates sent as parameters
 */
void point_update(struct point *p, int x, int y);

/**
 * @param p is the point structure to print
 * @return void
 * @brief shows the coordinates of the point
 */
void point_show(struct point *p);

/**
 * @param pa is the 'a' point
 * @param pb is the 'b' point
 * @return the absolute distance between two points
 * @brief sum the absolute distance between each x and y coordinates of the
 * points
 */
int points_distance(struct point *pa, struct point *pb);

#endif /* !POINT_H */
