/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:34:39 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/26 00:37:37 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	n = nb;
	while (nb > 1)
	{
		n = n * (--nb);
	}
	return (n);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf ("%d", ft_iterative_factorial(5));
// }