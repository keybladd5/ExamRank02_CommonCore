/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:13:19 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/12 21:36:38 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_aux(char *str)
{
	int i = 0;
	int words = 0;
	int j = 0;
	while (str[j])
		j++;
	while (i <= j && str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		while (!(str[i] == ' ' || str[i] == '\t'))
		{
			i++;
		}
		words++;
	}
	return (words);
}

char **ft_split(char *str)
{
	if (!str)
		return(NULL);

	char **rtrn = (char **)malloc(sizeof(char *) * ft_aux(str) + 1);
	if (!rtrn)
		return (NULL);

	int cnt = (1 + ft_aux(str));
	int i = 0;
	int j = 0;
	int r = 0;
	char *ptr = NULL;

	rtrn[cnt] = 0; //ultima palabra es un null
	cnt--;  //le resto un valor para evitar iterar mal en el bucle grande
	while ((*str == ' ' || *str == '\t') && *str) //Avanzo para saltar primero espacios
		str++;
	while (cnt >= 0) //doy tantas vueltas como palabras existan
	{
		if ((*str != ' ' && *str != '\t') && *str)
		{
			r = 0;
			ptr = str;
			while ((ptr[r] != ' ' && ptr[r] != '\t') && ptr[r])
				r++;
		}	
		rtrn[j] = (char *)malloc(sizeof(char) * r + 1);
		while ((*str != ' ' && *str != '\t') && *str) //mientras sea palabra copio a rtrn
		{
			rtrn[j][i] = *str;
			str++;
			i++;
			if ((*str == ' ' || *str == '\t') && *str) //si deja de ser palabra pongo un null
				rtrn[j][i] = '\0';
		}
		while ((*str == ' ' || *str == '\t') && *str)
		{
			str++;
			i = 0;
		}
		cnt--;
		j++;
	}
	return (rtrn);
}

#include <stdio.h>
int	main()
{
	char *str = "hola                                                        adio                               .";
	char **matrixstr = ft_split(str);
	int  i = 0;
	printf("%s\n", matrixstr[i]);
	i++;
	printf("%s\n", matrixstr[i]);
	i++;
	printf("%s\n", matrixstr[i]);
//	i++;
//	printf("%s\n", matrixstr[i]);
//	i++;

	return (0);
}
