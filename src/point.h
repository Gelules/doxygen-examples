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
 * @brief create a point structure initizalied with the two parameters usging
 * malloc
 */
struct point *point_create(int x, int y);

#endif /* !POINT_H */
