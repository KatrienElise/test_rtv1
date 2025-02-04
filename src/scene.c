/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scene.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 16:10:45 by nmartins       #+#    #+#                */
/*   Updated: 2019/09/27 17:56:03 by kblum         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

#include "scene.h"
#include "app.h"

void			scene_render_to_surface(
	const t_scene *scene, SDL_Surface *surface)
{
	(void)scene;
	(void)surface;
}

void			my_scene_make(t_scene *scene)
{
	t_object	*my_object;

	scene->camera = (t_camera){
		.origin = (t_vec3) { 0.1, 0.0, 0.0 },
		.rotation = (t_vec3) { 0.0, 0.0, 0.0 },
		.fov = 70.0,
	};
	camera_recompute(&scene->camera);
	scene->objects = container_make();
	if (!scene->objects)
	{
		ft_printf("Failed to allocate t_object container\n");
		exit(EXIT_FAILURE);
	}
	my_object = (t_object*)malloc(sizeof(t_object));
	if (!my_object)
	{
		ft_printf("Failed to allocate my_object\n");
		exit(EXIT_FAILURE);
	}
	my_object->shape.type = SPHERE;
	my_object->shape.value = (t_shape_value){(t_sphere){
		.origin = (t_vec3) { 0.0, 0.0, 10.0 },
		.radius = 5.0,
	}};
	container_push_object(scene->objects, my_object);
	my_object = (t_object*)malloc(sizeof(t_object));
	if (!my_object)
	{
		ft_printf("Failed to allocate my_object\n");
		exit(EXIT_FAILURE);
	}
	my_object->shape.type = SPHERE;
	my_object->shape.value = (t_shape_value){(t_sphere){
		.origin = (t_vec3) { 10.0, 0.0, 10.0 },
		.radius = 5.0,
	}};
	container_push_object(scene->objects, my_object);
	my_object = (t_object*)malloc(sizeof(t_object));
	if (!my_object)
	{
		ft_printf("Failed to allocate my_object\n");
		exit(EXIT_FAILURE);
	}
	my_object->shape.type = PLANE;
	my_object->shape.value = (t_shape_value){(t_plane){
		.p = (t_vec3) { 0.0, 1.0, 0.0 },
		//.n = (t_vec3) { 0.0, 0.0, 0.0 } // which coordinates for a plane
	}};
	container_push_object(scene->objects, my_object);
}

void			scene_update(t_scene *scene, t_keystate *ks)
{
	const double speed = is_key_down(ks, SDL_SCANCODE_LSHIFT) ? 5.0 : 1.0;
	if (is_key_down(ks, SDL_SCANCODE_A))
		camera_move(&scene->camera, (t_vec3){-speed, 0.0, 0.0});
	if (is_key_down(ks, SDL_SCANCODE_D))
		camera_move(&scene->camera, (t_vec3){speed, 0.0, 0.0});
	if (is_key_down(ks, SDL_SCANCODE_W))
		camera_move(&scene->camera, (t_vec3){0.0, 0.0, -speed});
	if (is_key_down(ks, SDL_SCANCODE_S))
		camera_move(&scene->camera, (t_vec3){0.0, 0.0, speed});
	if (is_key_down(ks, SDL_SCANCODE_Q))
		camera_move(&scene->camera, (t_vec3){0.0, speed, 0.0});
	if (is_key_down(ks, SDL_SCANCODE_E))
		camera_move(&scene->camera, (t_vec3){0.0, -speed, 0.0});
	if (is_key_down(ks, SDL_SCANCODE_LEFT))
		scene->camera.rotation.y -= 0.05 * speed;
	if (is_key_down(ks, SDL_SCANCODE_RIGHT))
		scene->camera.rotation.y += 0.05 * speed;
	if (is_key_down(ks, SDL_SCANCODE_UP))
		scene->camera.rotation.x -= 0.05 * speed;
	if (is_key_down(ks, SDL_SCANCODE_DOWN))
		scene->camera.rotation.x += 0.05 * speed;
}
