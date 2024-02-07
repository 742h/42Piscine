/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:52:26 by hassaleh          #+#    #+#             */
/*   Updated: 2023/08/01 19:51:32 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	a = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}

// #include <stdio.h>
// int main(void)
// {
// 	int min;
// 	int max;
// 	int *tab;
// 	int i = 0;
// 	int size;

// 	min = 5;
// 	max = 10;
// 	size = max - min;
// 	tab = ft_range(min, max);
// 	while (i < size)
// 	{
// 		printf ("%d, ", tab[i]);
// 		i++;
// 	}
// }