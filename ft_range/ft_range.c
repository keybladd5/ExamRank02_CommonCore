/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:14:19 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/11 19:42:45 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	int *arr;

	arr = NULL;

	if (start < end)
	{
		arr = (int *)malloc(sizeof(int) *(end - start));
		if (!arr)
			return (0);
		while (start <= end)
		{
			arr[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		arr = (int *)malloc(sizeof(int) * (start - end));
		while(start >= end)
		{
			arr[i] = start;
			start--;
			i++;
		}
	}
	else if (start == end)
	{
		arr = (int *)malloc(sizeof(int) * 1);
		arr[i] = start;
	}
	return (arr);
}

/*#include <stdio.h>
int	main()
{
	int i = 0;
	int *arr = ft_range(0, -3);
	
	while (arr[i] != -3)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("%d", arr[i]);
	printf("\n");
	free(arr);
	return (0);
}*/
