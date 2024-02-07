/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:00:16 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/16 22:20:52 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '\0') || (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("hasan"));
// 	printf("%d\n", ft_str_is_alpha("HELLO"));
// 	printf("%d", ft_str_is_alpha("787878"));
// }