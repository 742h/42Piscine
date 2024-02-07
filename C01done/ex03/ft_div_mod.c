/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:23:04 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/15 23:27:01 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int main()
// {
//     int a;
//     int b;
//     int div;
//     int mod;

//     a = 25;
//     b = 12;
//     ft_div_mod(a, b, &div, &mod);
//     printf("%d\n", div);
//     printf("%d", mod);
//     return(0);
// }