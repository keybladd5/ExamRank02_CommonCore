/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:50:54 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/11 20:55:18 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_aux(long int nbr, int rtrn)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		rtrn++;
	}
	if (nbr < 10)
		return (rtrn);
	return (ft_aux(nbr / 10, rtrn + 1));
}
char	*ft_itoa(int nbr)
{
	char *str = NULL;
	int		i = ft_aux(nbr, 0);

	str = (char *)malloc(sizeof(char) * ft_aux((long int)nbr, 1)+1);
	str[i+1] = '\0';
	if (nbr == -2147483648)
		str = "-2147483648";
	else if (nbr == 0)
		str = "0";
	else
		if (nbr < 0)
		{
			nbr = -nbr;
			str[0] = '-';
		}
		while (nbr > 0)
		{
			str[i] = (nbr % 10) + '0';
			nbr = nbr / 10;
			i--;
		}
	return(str);
}
/*
#include <unistd.h>
#include <xlocale.h>
#include <stdio.h>
int main(){
	printf("%s\n", ft_itoa(0));

	return 0;
}


int main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	char *str = NULL;
	str = ft_itoa(atoi(argv[1]));
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (write(1, "\n", 1), 0);
}*/

