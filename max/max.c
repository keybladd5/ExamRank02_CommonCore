/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:20 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/14 19:09:44 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	if (!tab || len == 0)
		return (0);
	int max = tab[0];
	int i = 0;
	int j = 0;
	unsigned int cnt = 0;

//	while (cnt < len)
//	{
		j = 0;
//		while (tab[i] >= tab[j] && (unsigned int)j < len)
       
		while ((unsigned int)j++ < len)
		{
       		if (tab[j]> max)
				max = tab[j];
		}
//		if (tab[i] > tab[j])
//			return (tab[i]);
//		cnt++;
//		i++; 
//	}
//	i--;
//	return (tab[i]);
	return (max);
}

#include <stdio.h>
int	main ()
{
	int arr[] = {2, 0, -44, 7777, -124, 1};
	printf("%d", max(arr, 6));
	return 0;
}
