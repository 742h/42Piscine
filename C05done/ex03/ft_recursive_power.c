/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:43:27 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/26 00:40:21 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power != 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	else 
	{
		return (1);
	}
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_recursive_power(5,3));
// }