/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:39:03 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/11 19:11:52 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	
	int i = 0;
	
	while (argv[1][i])
		i++;
	i--;
	while((argv[1][i] == ' ' || argv[1][i] == '\t') && i >= 0)
		i--;
	while ((argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n' && argv[1][i] != '\f' && argv[1][i] != '\v' && argv[1][i] != '\r') && i >= 0)
		i--;
	i++;
	while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	return (write(1, "\n", 1), 0);
}

