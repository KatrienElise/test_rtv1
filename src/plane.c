/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   plane.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kblum <kblum@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/27 14:23:21 by kblum          #+#    #+#                */
/*   Updated: 2019/09/27 17:55:55 by kblum         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "shapes.h"
#include "shape.h"
#include <stdbool.h>
#include <ft_printf.h>
/*
plane is two triangles
dit is enkel een test voor git
ax + by + cz + d = 0
aix + biy + ciz = 0; (lies in the triangle)
if i is also on the ray (so intersects);
i = r(t*) = (1 - t*)c + t* p;;

ray = r(head) = pr + dt;
plane = r((head) - pp) * n = 0;
((pr + dt) - pp) * n = 0;
p = point on the plane
n  normal
r(head) = another point on plane
vector that goes from p to rhead is rhead - p (this vector lies 
flat on the plane, so is 90 degrees with normal);
dot product of 2 vectors at right angle is 0 (so the normal and rhead -p)

t = 1/(d dot n ) *(pp dot n - pr dot n )
if you find value of t you know how far the ray has to go to 
hit the plane
if the dot product of ray and normal plane = 0 , they dont hit angle
is 90 degrees. if d dot n = 0 dont meet or every point meets
 */
bool    plane_intersect(const t_shape *shape, const t_ray *ray, t_intersection isect)
{
    const t_plane *plane = &shape->value.plane;
    t_vec3  normal_plane;
    double  dot;
    double  dot2;
    double  t;

    normal_plane = vec3_normalize(&shape->value->plane.p);

    /*  want to know t, point of intersection. 
    ray origin,
    cross product of two vectors, -> surface normal

    */
}
