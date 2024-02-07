/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:17:15 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/26 23:33:27 by hassaleh         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}

// #include <stdio.h> 
// int main()
// {
// 	printf ("%d", ft_find_next_prime(4));
// }