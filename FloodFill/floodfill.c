/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:50:04 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/07 13:11:27 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

void	fill(char **tab, t_point size, t_point actual, char to_fill)
{
	if (actual.y < 0 || actual.y >= size.y || actual.x < 0 || actual.x >= size.x || tab[actual.y][actual.x] != to_fill)
			return ;
	tab[actual.y][actual.x] = 'F';
	fill(tab, size, (t_point){actual.x - 1, actual.y}, to_fill);
	fill(tab, size, (t_point){actual.x + 1, actual.y}, to_fill);
	fill(tab, size, (t_point){actual.x, actual.y - 1}, to_fill);
	fill(tab, size, (t_point){actual.x, actual.y + 1}, to_fill);

}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
