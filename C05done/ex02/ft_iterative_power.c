/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:21:07 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/27 00:12:13 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	a;

	i = 1;
	a = 0;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (a < power)
	{
		i = i * nb;
		a++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	printf ("%d", ft_iterative_power(5,9));
// }