/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:25:52 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/27 11:32:21 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int	i;
	int	i2;
	int i3;
	char **tab;

	i = 0;
	i2 = 0;
	tab = malloc(sizeof(char) * 1000);
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			i3 = 0;
			tab[i2] = malloc(sizeof(char) * 1000);
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

int main(void)
{
	char *str = "hola como estas";
	char **result = ft_split(str);
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	return (0);
}
