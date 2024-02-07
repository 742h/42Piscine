/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:57:53 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/23 20:18:11 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	l;

	l = argc - 1;
	while (l > 0)
	{
		i = 0;
		while (argv[l][i])
		{
			write (1, &argv[l][i], 1);
			i++;
		}
		write (1, "\n", 1);
		l--;
	}
	return (0);
}
