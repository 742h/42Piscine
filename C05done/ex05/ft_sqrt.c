/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:35:31 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/27 00:12:34 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	if (nb > -1)
	{
		while (a * a < nb && a <= 46340)
			a++;
		if (a * a == nb)
			return (a);
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf ("%d", ft_sqrt(36));
// }