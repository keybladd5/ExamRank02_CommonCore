/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:12:52 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/11 18:37:10 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*int	ft_checker(char *str, char c)
{
	while(*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}*/
int	main(int argc, char **argv)
{
	if (argc != 4)
		return  (write(1, "\n", 1), 0);
	if (argv[2][1] || argv[2][1] || !argv[2][0] || !argv[3][0])
		return  (write(1, "\n", 1), 0);
	
	int i = 0;

	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		write(1, &argv[1][i], 1);
		i++;
	}
	return (write(1, "\n", 1), 0);
}

