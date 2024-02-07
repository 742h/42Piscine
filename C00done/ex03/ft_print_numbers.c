/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:40:26 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/29 20:30:30 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	h;

	h = '0';
	while (h <= '9')
	{
		write(1, &h, 1);
		h++;
	}
}

// int main()
// {
//     ft_print_numbers();
//     return(0);
// }