/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:40:27 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/09 12:44:26 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char bit;

	i = 7;
	while (i)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

//Main para poder printear desde la linea de comandos el output de la funcion
/*int main(int argc, char **argv)
{
    if (argc == 1)
        return (write(1, "\n", 1), 0);
    else
    {
		argv++;
		argc--;
        while (argc > 0)
        {
            char *current_arg = *argv; 

            while (*current_arg) 
            {
                print_bits(*current_arg);
                write(1, "\n", 1);
                current_arg++;
            }

            argv++;
            argc--;
        }
    }

    return (0);
}*/
