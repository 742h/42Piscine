/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:13:17 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/26 00:38:53 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb > 1)
	{
		n = nb * ft_recursive_factorial(nb -1);
	}
	return (n);
}

// #include <stdio.h>
// int main(void)
// {
//     printf ("%d", ft_recursive_factorial(0));
// }