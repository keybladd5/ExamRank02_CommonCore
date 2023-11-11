/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:50:09 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/11 22:43:46 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{	
	if (argc != 2 || atoi(argv[1]) <= 0)
		return (printf("\n"), 0);
	int i = 2;
	int nbr = atoi(argv[1]);

	if (nbr == 1)
		return (printf("1\n"), 0);
	while (i != nbr)
	{
		if (nbr % i == 0)
		{
			printf("%d*", i);
			nbr = nbr / i;
		}
		else
			i++;		
	}
	printf("%d\n", nbr);
	return 0;
}
