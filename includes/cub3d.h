/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboyer <aboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:29:15 by aboyer            #+#    #+#             */
/*   Updated: 2023/05/18 14:38:46 by aboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <fcntl.h>
# include <sys/stat.h>

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_north;
	void	*img_south;
	void	*img_west;
	void	*img_east;
}			t_data;

#endif
