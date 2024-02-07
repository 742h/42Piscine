/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:38:51 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/27 00:12:46 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (nb % a != 0)
		a++;
	if (a == nb)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf ("%d", ft_is_prime(4));
// }