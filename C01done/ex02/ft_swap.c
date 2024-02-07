/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:09:54 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/15 23:15:56 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include<stdio.h>

// int main()
// {
//     int Hasan = 42;
//     int Mo = 27;
//     ft_swap(&Hasan , &Mo);
//     printf("%d\n%d",Hasan , Mo);
//     return(0);
// }