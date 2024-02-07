/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:18:55 by hassaleh          #+#    #+#             */
/*   Updated: 2023/08/01 19:52:14 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
		*range = tab;
		return (i);
	}
}

// int main(void)
// {
// 	int min;
// 	int max;
// 	int *tab;
// 	int i = 0;
// 	int size;

// 	min = 5;
// 	max = 10;
// 	size = ft_ultimate_range(&tab, min, max);
// 	while (i < size)
// 	{
// 		printf ("%d, ", tab[i]);
// 		i++;
// 	}
// }