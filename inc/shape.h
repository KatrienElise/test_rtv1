/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   shape.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 15:31:06 by nmartins       #+#    #+#                */
/*   Updated: 2019/09/27 14:29:03 by kblum         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_H
# define SHAPE_H

# include <stdbool.h>

// typedef int	t_plane;
// typedef int	t_triangle;

# include "ray.h"
# include "intersection.h"
# include "shapes.h"

typedef union	u_shape_value {
	t_sphere	sphere;
	t_plane		plane;
	// t_triangle	triangle;
}				t_shape_value;

typedef struct	s_shape
{
	enum {
		SPHERE,
		PLANE,
		// TRIANGLE,
	}				type;
	t_shape_value	value;
}				t_shape;

// bool	shape_does_intersect(const t_shape *shape, const t_ray *ray);
bool			shape_intersect(
	const t_shape *shape, const t_ray *ray, t_intersection *isect);

#endif
