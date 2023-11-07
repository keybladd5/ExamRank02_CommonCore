/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:01:21 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/07 11:01:23 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char c, char *str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "\n", 1), 0);
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while(argv[1][i])
		i++;
	i--;
	while(argv[2][j])
	{
		argv[1][i] = argv[2][j]; //si esto se lee deberia dar SegFault
		j++;
		i++;
	}
	while (k <= i)
	{
		if(ft_check(argv[1][k], argv[1], k) == 1)
			write(1, &argv[1][k], 1);
		k++;
	}
	write(1, "\n", 1);
	return (0);
}