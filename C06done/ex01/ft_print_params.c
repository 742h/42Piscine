/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:30:05 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/23 20:07:56 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	h;

	h = 1;
	while (h < argc)
	{
		i = 0;
		while (argv[h][i] != '\0')
		{
			write (1, &argv[h][i], 1);
			i++;
		}
		write (1, "\n", 1);
		h++;
	}
	return (0);
}
