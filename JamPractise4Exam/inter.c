/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:42:21 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/12 19:39:30 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_aux(char *str, char c)
{
	int i = 0;

	while(str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int j = 0;

	while (argv[1][i])
	{
		j = i - 1;
		while (argv[1][i] != argv[1][j] && j >= 0)
			j--;
		if ((ft_aux(argv[2], argv[1][i]) == 1) && j == -1)
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
