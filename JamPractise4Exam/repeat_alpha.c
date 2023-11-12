/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:01:55 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/12 18:22:42 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	
	int i = 0;
	int n = 0;

	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			n = argv[1][i];
			while(n >= 97)
			{
				write(1, &argv[1][i], 1);
				n--;
			}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			n = argv[1][i];
			while(n >= 65)
			{
				write(1, &argv[1][i], 1);
				n--;
			}
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	return (write(1, "\n", 1), 0);
}
