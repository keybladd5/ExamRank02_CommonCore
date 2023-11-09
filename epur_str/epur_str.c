/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:04:59 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/09 16:53:32 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	int i = 0;
	int flag = 0;
	while (argv[1][i] == ' ' ||  argv[1][i] == '\t')
		i++;
	while (argv[1][i])
	{
		if (argv[1][i] == ' ' ||  argv[1][i] == '\t')
			flag = 1;
		if (argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			if (flag)
				write(1, " ", 1);
			flag = 0;
			write(1, &argv[1][i], 1);
		}
		i++;
	}
	return (write(1, "\n", 1), 0);
}
