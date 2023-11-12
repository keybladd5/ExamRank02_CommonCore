/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:46:38 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/12 20:08:24 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int		ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	int i = 1;

	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
