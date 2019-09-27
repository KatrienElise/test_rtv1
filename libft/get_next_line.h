/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/26 17:34:42 by nmartins       #+#    #+#                */
/*   Updated: 2019/06/09 13:58:10 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"

/*
**          _______________________________________________________________
**         /         _                     _     _ _            		  /
**        /         | |                   | |   | (_)             42     /
**       / __ _  ___| |_   _ __   _____  _| |_  | |_ _ __   ___ 		/
**      / / _` |/ _ \ __| | '_ \ / _ \ \/ / __| | | | '_ \ / _ \	   /
**     /  | (_| |  __/ |_  | | | |  __/>  <| |_  | | | | | |  __/	  /
**    /   \__, |\___|\__| |_| |_|\___/_/\_\\__| |_|_|_| |_|\___|	 /
**   /     __/ |         this header took 5 seconds to make         /
**  /     |___/      ... a codam project by emiflake               /
** /______________________________________________________________/
**
** Allowed functions: read, malloc, free
** -------------------------------------
** @param fd File Descriptor | The file descriptor to read from
** @param line 				 | Address to pointer to save line into
** -------------------------------------
** @return -1 | 0 | 1
**   -1: Error ocurred, please handle ;)
**    0: Reading completed, have a fun time with your lines
**    1: There's more stuff to do! Go on!!! (Lines left to read)
**
** -------------------------------------
** @macro BUFF_SIZE
**   This macro will define the size of blocks in which
**   we will read from the file. Changig this might affect
**   performance. Choose wisely!
*/
# define BUFF_SIZE 4096

/*
** -------------------------------------
*/
int	ft_get_next_line(const int fd, char **line);

#endif
